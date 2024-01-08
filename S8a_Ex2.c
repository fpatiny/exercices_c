/**
 * @file S8a_Ex2.c
 * @author florian.patiny@heig-vd.ch
 * @brief Make sum for columns and COLS of a 2D array
 * @note COMPILE gcc S8a_Ex2.c -g -Wall -Wextra -Wpedantic -o S8a2result
 */

#include <stdio.h>

#define ROWS 13
#define COLS 5
#define COL_LEN 10

void displayTable(double table[COLS][ROWS]);
void displayLine(void);

double sumCol(double table[COLS][ROWS], int column);
double sumRow(double table[COLS][ROWS], int row);

int main(void)
{
    double table[COLS][ROWS] = {{414.38, 403.41, 227.55, 220.2, 13.46, 259.37, 327.06, 50.82, 450.78, 434.45, 420.13, 147.76, 0},
                                {222.72, 390.61, 73.86, 342.25, 172.66, 378.72, 16.53, 3.37, 9.33, 77.8, 474.69, 250.73, 0},
                                {99.17, 174.39, 291.08, 139.45, 252.33, 173.02, 391.05, 201.71, 111.63, 459.46, 343.64, 201.47, 0},
                                {153.81, 18.11, 416.55, 86.98, 265.32, 208.43, 266.84, 170.84, 337.07, 479.17, 273.28, 9.75, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    printf("%lf\n", table[3][1]);
    displayTable(table);
}

void displayTable(double table[COLS][ROWS])
{
    displayLine();
    for (int j = 0; j < (ROWS - 1); j++)
    {
        printf("|");
        for (int i = 0; i < (COLS - 1); i++)
        {
            printf("%8.2lf |", table[i][j]);
        }

        printf("%8.2lf |", sumRow(table, (1 + j)));
        printf("\n");
        displayLine();
    }
}
void displayLine(void)
{
    for (int i = 1; i <= (COLS * COL_LEN); i++)
    {
        printf("-");
    }
    printf("-");
    printf("\n");
}
double sumCol(double table[COLS][ROWS], int column)
{
    if (table == NULL)
        return 0;

    double sum = 0.0;
    for (int i = 0; i < (ROWS - 1); i++)
        sum += table[i][column - 1];
    return sum;
}
double sumRow(double table[COLS][ROWS], int row)
{
    if (table == NULL)
        return 0;

    double sum = 0.0;
    for (int i = 0; i < (COLS - 1); i++)
        sum += table[row - 1][i];
    return sum;
}