/**
 * @file byte_swap.c
 * @author florian.patiny@heig-vd.ch
 * @brief Input a uint16-t and return the walue with the two bytes inverted
 * @example 0x0A9F --byte_swap--> 0x9F0A
 * @note S10a-Fonctions1 Ex1-e
 */
#include <stdint.h>

uint16_t byte_swap(uint16_t n)
{
    uint16_t tmp = n << 8;
    uint16_t result = (n >> 8) + tmp;
    return result;
}
