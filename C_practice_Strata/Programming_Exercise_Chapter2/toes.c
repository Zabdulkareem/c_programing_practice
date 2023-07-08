#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This function calculates the square of toes and
 * double of toes
 * Return: Always 0
*/
int main(void)
{
    int toes = 10;
    int twice_toes, toes_squared;

    twice_toes = toes * 2;
    toes_squared = toes * toes;

    printf("Toes: %d\nTwice toes: %d\nSquare of toes: %d\n", toes,\
    twice_toes, toes_squared);
    return (0);
}