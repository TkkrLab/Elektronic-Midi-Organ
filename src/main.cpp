#define F_CPU 16e6l
#include <avr/io.h>
#include <util/delay.h>

// #define NUMROWS 8
// #define NUMCOLS 14
// #define NUMKEYS 49
// #define START_NOTE 36

// typedef struct
// {
//     uint8_t start_id;
//     uint8_t end_id;
//     uint64_t start_time;
//     uint64_t end_time;
//     bool triggerd;
// } note_t;

int main(void)
{
    DDRB = (1 << PB5);
    while(1)
    {
        PORTB &= ~(1 << PB5);
        _delay_ms(500);
        PORTB |= (1 << PB5);
        _delay_ms(500);
    }
    return 0;
}