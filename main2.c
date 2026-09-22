/*
 * main.c
 *
 * Created: 9/22/2026 1:22:10 PM
 *  Author: Marawan.Muhammed
 */ 

#include <xc.h>
#include "STD_TYPES.h"
#include "UART.h"
#include "avr/io.h"
#include "BIT_MATH.h"
int main(void)
{
	
	UART_init(9600);
	SET_BIT(DDRB , 0);
	u8 Data_value;
	
    while(1)
    {
		
		Data_value = UART_Recieve();
		
		if(Data_value == 'A')
		{
			
		   SET_BIT(PORTB , 0);
			
		}
		
        //TODO:: Please write your application code 
    }
}