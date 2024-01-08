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

int main(void)
{
    int n = 12;
    int m = -15;
    printf("Input values are: %d and %d\n", n, m);
    printf("n is %s and m is %s.\n", is_positive(n) ? "positive" : "negative", is_positive(m) ? "positive" : "negative");
    printf("The min value between n and m is: %d\n", minimum(n, m));
}