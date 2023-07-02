#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This program calculates the value of 2 raised to its
 * current exponent
 * Return: Always 0 (Success)
*/
int main(void)
{
    int exponent;
    int result = 1;

    for (exponent = 0; exponent < 16; exponent++)
    {
        printf("2 raised to the power of %d is %d\n", exponent, result);
        result *= 2;
    }
    return (0);
}