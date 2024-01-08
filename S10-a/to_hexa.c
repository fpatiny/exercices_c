/**
 * @file to_hexa.c
 * @author florian.patiny@heig-vd.ch
 * @brief Converts a number between 0 and 15 to the corresponding hexadecimal value.
 * @note S10a-Fonctions1 Ex1-e
 */
#include <stdint.h>

char to_hexa(uint8_t n)
{
    char c = 'Z';
    if (n < 10)
        c = 48 + n;
    else if (n >= 10 && n <= 15)
        c = 65 + (n - 10);
    else
        c = '.';
    return c;
}
