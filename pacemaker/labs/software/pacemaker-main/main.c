/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include <system.h>
#include <sys/alt_alarm.h>
#include <sys/alt_irq.h>
#include <altera_avalon_pio_regs.h>
#include <altera_avalon_uart_regs.h>

#include "sccharts.h"


uint32_t uartDivisor = 433;

#define BUFFER_SIZE 100

volatile char rx_buffer[BUFFER_SIZE]; // Buffer for received data
volatile int rx_index = 0; // Index for the received buffer

alt_u32 timerISR(void *context)
{
	int *timeCount = (int *)context;
	(*timeCount)++;
	return 1; // next time out is 100ms
}

void buttonISR(void *context, alt_u32 id)
{
	volatile int *temp = (volatile int *)context;
	(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE);
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
}

void uartISR(void* context, alt_u32 id) {
    IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE, 0);

    // Check if the interrupt was for RX (data received)
    if (IORD_ALTERA_AVALON_UART_STATUS(UART_BASE) & ALTERA_AVALON_UART_STATUS_RRDY_MSK) {
		char data = IORD_ALTERA_AVALON_UART_RXDATA(UART_BASE); // Read received data
        if (rx_index < BUFFER_SIZE - 1) { // Avoid overflow
            rx_buffer[rx_index++] = data; // Store in buffer
            rx_buffer[rx_index] = '\0'; // Null-terminate for safety
        } else {
            // Handle buffer overflow (optional)
            // e.g., reset index or notify
            rx_index = 0; // Reset index for simplicity
        }
    }
    IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE, (1<<7));
}


int main()
{
	// Button init
	int button = 0;
	void *buttonContext = (void *)&button;
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(KEYS_BASE, 0x7);
	alt_irq_register(KEYS_IRQ, buttonContext, buttonISR);

	// Register the ISR for UART
	IOWR_ALTERA_AVALON_UART_DIVISOR(UART_BASE, uartDivisor);
	IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE, ALTERA_AVALON_UART_CONTROL_RRDY_MSK);
	alt_irq_register(UART_IRQ, NULL, uartISR); // Ensure UART_IRQ is defined correctly

	// SC Chart Init
	TickData data;
	reset(&data);
	tick(&data); // init tick

	// Timer Init
	alt_alarm ticker;
	uint64_t systemTime = 0;
	void *timerContext = (void *)&systemTime;
	alt_alarm_start(&ticker, 1, timerISR, timerContext);
	uint64_t prevTime = 0;

	// Reset LED
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x00);

	// Blocking UART
	char choice[10];
	while (1)
	{
		printf("Select mode: Button, UART\r\n");
		scanf("%9s", &choice);

		// Convert string to lower
		for (int i = 0; i < strlen(choice); i++)
		{
			choice[i] = tolower((unsigned char)choice[i]);
		}

		// Compare strings
		if (strcmp(choice, "button") == 0 || strcmp(choice, "uart") == 0)
		{
			printf("You have selected the %s mode.\n", choice);
			break;
		}

		printf("Invalid entry. Please try again.\n");
	}
	while (1)
	{
		// update time
		data.deltaT = systemTime - prevTime;
		prevTime = systemTime;

		if (strcmp(choice, "button") == 0)
		{

			// update inputs
			data.AS = (button & (1 << 2)) ? 1 : 0;
			data.VS = (button & (1 << 1)) ? 1 : 0;
			button = 0; // Bring back to 0

			tick(&data);

			// update outputs
			if (data.VP)
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x01);
				printf("VP\r\n");
			}
			else
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, IORD_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE) & ~0x01);
			}

			if (data.AP)
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x02);
				printf("AP\r\n");
			}
			else
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, IORD_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE) & ~0x02);
			}

			if (data.VS)
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x01);
				printf("VS\r\n");
			}
			else
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, IORD_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE) & ~0x01);
			}

			if (data.AS)
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x02);
				printf("AS\r\n");
			}
			else
			{
				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, IORD_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE) & ~0x02);
			}
		}

		else if (strcmp(choice, "uart") == 0)
		{
			if (rx_index > 0) {
				data.VS = (rx_buffer[rx_index - 1] == 65) ? 1 : 0;
				data.AS = (rx_buffer[rx_index - 1] == 86) ? 1 : 0;
				rx_index = 0;
			}

			tick(&data);

			if (data.VP)
			{
				while(!(IORD_ALTERA_AVALON_UART_STATUS(UART_BASE) & ALTERA_AVALON_UART_STATUS_TRDY_MSK)){}
				IOWR_ALTERA_AVALON_UART_TXDATA(UART_BASE, 'V');
			}

			if (data.AP)
			{
				while(!(IORD_ALTERA_AVALON_UART_STATUS(UART_BASE) & ALTERA_AVALON_UART_STATUS_TRDY_MSK)){}
				IOWR_ALTERA_AVALON_UART_TXDATA(UART_BASE, 'A');
			}
		}

		// if (button)
		// {
		// 	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x00);
		// 	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x01);
		// 	printf("System Shutting Down... Goodbye!\n");
		// 	break;
		// }
	}
	return 0;
}
