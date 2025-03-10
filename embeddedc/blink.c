#define F_CPU 16000000UL  // Define CPU frequency as 16 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= (1 << DDB5);
    while (1) {
        PORTB ^= (1 << PORTB5);
        _delay_ms(500);
    }
}
