#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This program converts my name to days and displays
 * both valuesl
 * Return: Always zero
*/
int main(void)
{
    int age, days;

    age = 31;
    days = age * 365;
    printf("%d years is equivalent of %d days\n", age, days);
    return(0);
}