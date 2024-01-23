/**
 * @file prime.c
 * @author florian.patiny@heig-vd.ch
 * @date 23 january 2024
 * @brief Tells if prime or not
 * @note COMPILE: gcc prime.c -g -W -Wpedantic -Wextra -o prime
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 1;

    // int userInput = atoi(argv[1]);
    int userInput = 0;
    if (sscanf(argv[1], "%d", &userInput) != 1) // sscanf permeet de récuperer un int depuis un char
        return 1;

    int testValue = (int)ceil(sqrt(userInput));

    for (int i = 2; i <= testValue; i++)
    {
        if (userInput % i == 0)
        {
            printf("%d is not prime\n", userInput);
            return 1;
        }
    }
    printf("%d is prime\n", userInput);
    return 0;
}