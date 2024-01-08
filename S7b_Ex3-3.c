/**
 * @file S7b_Ex3-3.c
 * @author florian.patiny@heig-vd.ch
 * @brief Convert integer to binary
 * @note COMPILE gcc S7b_Ex3-3.c -g -Wall -Wextra -Wpedantic -o S7b33result
 */

#include <stdio.h>
#include <stdbool.h>

short getInput(void);
void numbToBinary(short number);

int main(void)
{
    short number = getInput();
    printf("The binary value is: ");
    numbToBinary(number);
    printf("\n");
    return 0;
}

void numbToBinary(short number)
{
    for (short i = 15; i >= 0; i--)
    {
        if (number & 1 << i)
            printf("1");
        else
            printf("0");
    }
}

short getInput(void)
{
    bool saisieOK = false;
    short number = 0;
    printf("Convert to binary [0...65\'535]: ");
    do
    {
        if (scanf("%hd", &number) == 1)
            saisieOK = true;
    } while (saisieOK != true);
    return number;
}