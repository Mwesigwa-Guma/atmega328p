
#include <avr/io.h>
#include <util/delay.h>

#define BLINK_MS 150

int main(){
	DDRB |= _BV(PORTB0);

   while (1){
		PORTB ^= _BV(PORTB0);
		_delay_ms(BLINK_MS);
	}
   return 0;
}
