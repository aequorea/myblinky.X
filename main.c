/*
 * blinky -- blink leds on microchip explorer 16
 *
 * 20141025 (JS) - PIC24FJ128GA010
 * 20150323 (JS) - PIC24FJ64GB004
 * 
 */

#include <xc.h>

#pragma config JTAGEN = OFF             // JTAG port is disabled

void delay(void) {
    int i = 32767;
    while(i--) ;
}

void off(void) {
    delay();
    PORTA = 0;
    PORTB = 0;
    PORTC = 0;
}

int main(void)
{
    TRISA = 0;
    TRISB = 0;
    TRISC = 0;

    off();

    while(1) {

        PORTC = 1 << 6;
        off();
        PORTC = 1 << 5;
        off();
        PORTA = 1 << 8;
        off();
        PORTA = 1 << 9;
        off();
        PORTB = 1 << 2;
        off();
        PORTB = 1 << 3;
        off();
        PORTA = 1 << 7;
        off();
        PORTA = 1 << 10;
        off();

        delay();
    }
}
