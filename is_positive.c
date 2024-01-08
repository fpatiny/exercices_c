/**
 * @file is_positive.c
 * @author florian.patiny@heig-vd.ch
 * @brief Returns 1 if value is positive or null. Returns 0 if negative.
 * @note S10a-Fonctions1 Ex1-a
 */

#include <stdbool.h>

bool is_positive(int n)
{
    if (n >= 0)
        return true;
    else
        return false;
}
