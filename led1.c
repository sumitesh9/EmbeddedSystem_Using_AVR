/*
 * led1.c
 *
 * Created: 16/05/2019 22:22:04
 *  Author: Somu
 */ 


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRA=0xFF;
	DDRD=0xFF;
    while(1)
    {
        //TODO:: Please write your application code
		PORTA=0x01;
		_delay_ms(1000);
		PORTA=0x03;
		_delay_ms(1000);
		PORTA=0x07;
		_delay_ms(1000);
		PORTA=0x0F;
		_delay_ms(1000);
		PORTA=0x1F;
		_delay_ms(1000);
		PORTA=0x3F;
		_delay_ms(1000);
		PORTA=0x07F;
		_delay_ms(1000);
		PORTA=0xFF;
		_delay_ms(1000);
		PORTD=0x01;
		_delay_ms(1000);
		PORTD=0x03;
		_delay_ms(1000);
		PORTD=0x07;
		_delay_ms(1000);
		PORTD=0x0F;
		_delay_ms(1000);
		PORTD=0x1F;
		_delay_ms(1000);
		PORTD=0x3F;
		_delay_ms(1000);
		PORTD=0x7F;
		_delay_ms(1000);
		PORTD=0xFF;
		_delay_ms(1000);
		PORTA=0x00;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
    }
}