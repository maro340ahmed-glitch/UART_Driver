










#define F_CPU 16000000UL

#include "STD_TYPES.h"
#include "avr/io.h"
#include "BIT_MATH.h"
#include "UART.h"



void UART_init(u16 Baud_Rate)
{
	u16 BBR_Value = (u16)((F_CPU/(Baud_Rate*16UL))-1);
	
	
	UBRR0H = (u8)(BBR_Value>>8);
	
	UBRR0L = (u8)(BBR_Value);
	
	
	SET_BIT(UCSR0B ,RXEN0 );
	SET_BIT(UCSR0B ,TXEN0 );
		
	SET_BIT(UCSR0C,UCSZ01);
	SET_BIT(UCSR0C,UCSZ00);

    
	
	
}


void UART_Send(u8 data)
{

	
while (GET_BIT(UCSR0A, 5) == 0);
UDR0 = data;
	
}



u8 UART_Recieve(void)
{

	
	while (GET_BIT(UCSR0A, 7) == 0);
	return UDR0;
	
}