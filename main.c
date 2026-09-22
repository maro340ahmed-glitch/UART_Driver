/*
 * UART_APP1.c
 *
 * Created: 9/21/2026 2:02:04 PM
 * Author : Eman.Assem
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "UART.h"




int main(void)
{
	UART_init(9600);
    /* Replace with your application code */
    while (1) 
    {
		UART_Send('B');

    }
}

