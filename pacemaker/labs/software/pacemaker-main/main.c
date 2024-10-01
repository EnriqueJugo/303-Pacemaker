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

#include "sccharts.h"

alt_u32 timerISR(void* context){
	int* timeCount = (int*) context;
	(*timeCount)++;
	return 1; // next time out is 100ms
}

void buttonISR(void* context, alt_u32 id){
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
	printf("TRIGGER\r\n");
}

int main()
{
  printf("Hello from Nios II!\n");
  // Button init
  int button = 0;
  void* buttonContext = (void*) &button;
  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
  IOWR_ALTERA_AVALON_PIO_IRQ_MASK(KEYS_BASE, 0x7);
  alt_irq_register(KEYS_IRQ,buttonContext, buttonISR);

  // SC Chart Init
  TickData data;
  reset(&data);
  tick(&data); // init tick
  // Timer Init
  alt_alarm ticker;
  uint64_t systemTime = 0;
  void* timerContext = (void*) &systemTime;
  alt_alarm_start(&ticker, 1, timerISR, timerContext);
  uint64_t prevTime = 0;

  // Reset LED
  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x00);

  // Blocking UART
  int choice;
  printf("Enter anything to begin");
  scanf("%x", &choice);
  printf("Entered: %x\n", choice);

  FILE *pUart;
  pUart = fopen(UART_NAME, "r+");
  while(1){
	  // update time
	  data.deltaT = systemTime - prevTime;
	  prevTime = systemTime;
	  button = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

	  // update inputs
	  data.AS = (~button & (1 << 2)) ? 1 : 0;
	  data.VS = (~button & (1 << 1)) ? 1 : 0;

	  tick(&data);
	  char* msg;
	  if(data.VP)
	  {
		  msg = "V";
	  }

	  if(data.AP)
	  {
		  msg = "A";
	  }

	  if(pUart)
	  {
		  fwrite(msg, strlen (msg), 1, pUart);
	  }

	  // update outputs
	  if(data.VP){
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x01);
		  printf("VP\r\n");
	  } else {
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x00);
	  }

	  if(data.AP)
	  {
		  printf("AP\r\n");
	  }

	  if(data.AS)
	  {
		  printf("AS\r\n");
	  }

	  if(data.VS)
	  {
		  printf("VS\r\n");
	  }

//	  if(button){
//		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x00);
//		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x01);
//		  printf("System Shutting Down... Goodbye!\n");
//		  break;
//	  }
  }
//  while(1);
  fclose(pUart);
  return 0;
}
