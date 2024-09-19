#include <system.h> // to use the symbolic names
#include <altera_avalon_pio_regs.h> // to use PIO functions
#include <alt_types.h> // alt_u32 is a kind of alt_types
#include <sys/alt_irq.h> // to register interrupts
#include "sys/alt_alarm.h"
#include <stdio.h>
#include <stdbool.h>
#include "sccharts.h"

volatile int counter = 0;
volatile bool buttonPress = false;


// first we write our interrupt function
void button_interrupts_function(void* context, alt_u32 id)
{
	int* temp = (int*) context; // need to cast the context first before using it
	(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE);

	int number = *temp;

	// clear the edge capture register
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
	if (number == 1){
		counter++;
		printf("time:%d\n", counter);
	}

	printf("button: %i\n", *temp);
}

alt_u32 timer_isr_function(void* context)
{
int *timeCount = (int*) context;
(*timeCount)++;
counter++;
printf("time:%d\n", *timeCount);
return 1000; // the next time out will be 1000 ms
}

int main(void)
{
	// timer code
	int timeCountMain = 0;
	alt_alarm timer; // initialise the timer just like a variable
	FILE *lcd;
	unsigned int uiButtonsValue = 0;
	unsigned int uiButtonsValuePrevious = 0;

	void* timerContext = (void*) &timeCountMain;
	// start the timer, with timeout of 500 milli-seconds
	alt_alarm_start(&timer, 500, timer_isr_function, timerContext);
	lcd = fopen(LCD_NAME, "w");

	// button code
		int buttonValue = 1;
		void* context_going_to_be_passed = (void*) &buttonValue; // cast before passing to ISR
		// clears the edge capture register
		IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
		// enable interrupts for all buttons
		IOWR_ALTERA_AVALON_PIO_IRQ_MASK(KEYS_BASE, 0x7);
		// register the ISR
		alt_irq_register(KEYS_IRQ,context_going_to_be_passed,button_interrupts_function);
		bool isTimerRunning = true; // A flag to check if the timer is running

		    while(1)
		    {
		        uiButtonsValuePrevious = uiButtonsValue;
		        uiButtonsValue = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

		        if(uiButtonsValue == 5)
		        {
		            if(!isTimerRunning) // Check if the timer is running
		            {
		            	 alt_alarm_start(&timer, 500, timer_isr_function, timerContext); // Start the timer
		            	 isTimerRunning = true;  // Update the flag

		            }
		        }
		        else
		        {
		            if(isTimerRunning) // Check if the timer is stopped
		            {
		            	alt_alarm_stop(&timer);  // Stop the timer
		            	isTimerRunning = false;  // Update the flag
		            }
		        }

		if(lcd != NULL)
		{
			#define ESC 27
			#define CLEAR_LCD_STRING "[2J"
			fprintf(lcd, "%c%s", ESC, CLEAR_LCD_STRING);
			fprintf(lcd, "Counter: %d\n", counter);
		}
	}
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////
//#include <system.h> // to use the symbolic names
//#include <altera_avalon_pio_regs.h> // to use PIO functions
//#include <alt_types.h> // alt_u32 is a kind of alt_types
//#include <sys/alt_irq.h> // to register interrupts
//#include "sys/alt_alarm.h"
//#include <stdio.h>
//#include <stdbool.h>
//#include "sccharts.h"
//
//volatile int counter = 0;
//volatile bool buttonPress = false;
//
//
//// first we write our interrupt function
//void button_interrupts_function(void* context, alt_u32 id)
//{
//	int* temp = (int*) context; // need to cast the context first before using it
//	(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE);
//
//	int number = *temp;
//
//	// clear the edge capture register
//	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
//	if (number == 1){
//		counter++;
//		printf("time:%d\n", counter);
//	}
//
//	printf("button: %i\n", *temp);
//}
//
//alt_u32 timer_isr_function(void* context)
//{
//int *timeCount = (int*) context;
//(*timeCount)++;
//counter++;
//printf("time:%d\n", *timeCount);
//return 1000; // the next time out will be 1000 ms
//}
//
//int main(void)
//{
//	// timer code
//	int timeCountMain = 0;
//	alt_alarm timer;
//	FILE *lcd;
//	unsigned int uiButtonsValue = 0;
//	unsigned int uiButtonsValuePrevious = 0;
//
//	void* timerContext = (void*) &timeCountMain;
//	// start the timer, with timeout of 500 milli-seconds
//	alt_alarm_start(&timer, 500, timer_isr_function, timerContext);
//	lcd = fopen(LCD_NAME, "w");
//
//	// button code
//		int buttonValue = 1;
//		void* context_going_to_be_passed = (void*) &buttonValue; // cast before passing to ISR
//		// clears the edge capture register
//		IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0);
//		// enable interrupts for all buttons
//		IOWR_ALTERA_AVALON_PIO_IRQ_MASK(KEYS_BASE, 0x7);
//		// register the ISR
//		alt_irq_register(KEYS_IRQ,context_going_to_be_passed,button_interrupts_function);
//		bool isTimerRunning = true; // A flag to check if the timer is running
//		TickData data;
//		reset(&data);
//		    while(1)
//		    {
//		        uiButtonsValuePrevious = uiButtonsValue;
//		        uiButtonsValue = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);
//
//		        uiButtonsValue = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);
//
//				data.A = ~uiButtonsValue & (1 << 2) ? 1:0;
//				data.B = ~uiButtonsValue & (1 << 1) ? 1:0;
//				data.R = ~uiButtonsValue & (1 << 0) ? 1:0;
//				printf("%d\r\n", data.A);
//				tick(&data);
//				IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, data.O);
//
//		if(lcd != NULL)
//		{
//			#define ESC 27
//			#define CLEAR_LCD_STRING "[2J"
//			fprintf(lcd, "%c%s", ESC, CLEAR_LCD_STRING);
//			fprintf(lcd, "Counter: %d\n", counter);
//		}
//	}
//	return 0;
//}



