/*
 * Created: 03-Feb-20 1:08:03 AM
 * Author : Arad Fumm
 * led onner via bitwise
 * Attiny85 , 3x 100ohm res ,3x led , atmel studio
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  
	DDRB = (1<<DDB4)|(1<<DDB3);	//set as output
	while (1) 
    {
		PORTB = (1<<PB4); // PORTB = left shift to pin pb4 or like PORTB |= 0B00100000 
		_delay_ms(200); // wait few sec
		PORTB >>= 1; // PORTB = and shift 1 bit to  pin pb3
		_delay_ms(100);
		PORTB >>= 1; // PORTB = and shift 1 bit to pin  pb2
		_delay_ms(100); // wait few sec
    }
}
