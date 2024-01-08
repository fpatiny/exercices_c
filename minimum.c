/**
 * @file minimum.c
 * @author florian.patiny@heig-vd.ch
 * @brief Returns the smallest value between two numbers
 * @note S10a-Fonctions1 Ex1-c
 */

#include <stdbool.h>

int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
