
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "AVR_Ports.h"
#include "AVR_LCD_Declarations.h"

int main(void)
{
	LCD_Initialize();
	LCD_Print("Mohab");
}


