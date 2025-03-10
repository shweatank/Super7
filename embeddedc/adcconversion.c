#include <avr/io.h>

#define LED_PIN PB5   // Digital Pin 13 on Arduino Uno corresponds to PB5

void ADC_Init() {
    // Set the ADC prescaler to 128 (16 MHz / 128 = 125 KHz, within the 50-200 KHz range recommended for ADC)
    ADCSRA |= (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);

    // Set the reference voltage to AVcc (5V)
    ADMUX = (ADMUX & 0xF8) | (1 << REFS0); // Clear the previous settings and set REFS0

    // Enable the ADC
    ADCSRA |= (1 << ADEN);
}

uint16_t ADC_Read(uint8_t channel) {
    // Select the corresponding channel 0~7
    // ANDing with '7' to make sure only the first 3 bits are selected
    channel &= 0x07;
    ADMUX = (ADMUX & 0xF8) | channel;

    // Start the conversion
    ADCSRA |= (1 << ADSC);

    // Wait for the conversion to complete
    while (ADCSRA & (1 << ADSC));

    // Return the ADC value
    return ADC;
}

int main(void) {
    // Initialize the ADC
    ADC_Init();

    // Set LED_PIN as output
    DDRB |= (1 << LED_PIN);

    while (1) {
        // Read the ADC value from channel 0 (Analog Pin 0)
        uint16_t adc_value = ADC_Read(3);

        // If the ADC value is greater than 500, turn on the LED, else turn it off
        if (adc_value > 500) {
            PORTB |= (1 << LED_PIN);
        } else {
            PORTB &= ~(1 << LED_PIN);
        }
    }
}

