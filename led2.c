/*
 * GccApplication2.c
 *
 * Created: 17/05/2019 13:29:27
 *  Author: Somu
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <math.h>
int main(void)
{
	DDRA=0xFF;
	int i=0x01;
	int k=0;
    while(1)
    {
        //TODO:: Please write your application code
		PORTA=(i<<k)|((int)pow(2,k))|k;
		_delay_ms(1000);
		k++;
		if(k>8)
		{
		k=0;
		PORTA=0x00;
		_delay_ms(1000);
		}		
    }
}
