/**
 * @file S10a.c
 * @author florian.patiny@heig-vd.ch
 * @brief Prints the results of the fuctions of the S10a exercices.
 * @note COMPILE: gcc S10a.c -g -Wall -Wextra -Wpedantic -o S10a
 * @note call program: ./S10a
 */
// Include standard libraries
#include <stdio.h>
// Include custom functions
#include "is_positive.c"
#include "minimum.c"
#include "average.c"
#include "to_hexa.c"
#include "byte_swap.c"

int main(void)
{
    int m = -8;
    int n = 12823;
    int o = 2;
    printf("Input values are: m=%d, n=%d and o=%d\n", m, n, o);
    printf("n is %s and m is %s.\n", is_positive(n) ? "positive" : "negative", is_positive(m) ? "positive" : "negative");
    printf("The min value between n and m is: %d\n", minimum(n, m));
    printf("The average between m, n and o is: %.2lf\n", average(m, n, o));
    printf("The hexa value of %d is %c\nThe hexa value of %d is %c\n", n, to_hexa(n), o, to_hexa(o));
    printf("Before: %X\nAfter: %X\n", n, byte_swap(n));
}