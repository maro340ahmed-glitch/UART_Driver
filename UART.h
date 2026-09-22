///Header Gaurd

#ifndef UART_H_
#define UART_H_


void UART_init(u16 Baud_Rate);
void UART_Send(u8 data);
u8 UART_Recieve(void);
/*
		data=UART_Recieve();
		if(data== 6)
		SET_BIT(PORTC,0);// led on

*/


#endif 