#include <stdio.h>
void butler(void);       /* ANSI/ISO C function prototyping */

/**
 * main - Entry point
 * butler - calls for the butler
 * (@void) - No argument is passed
 * 
 * Description: This is a program using two functions in one file
 * Return: Always zero (For the main function). Nothing is returned
 * in the butler function.
*/
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();       /* butler function call */
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return(0);
}

void butler(void)
{
    printf("You rang, ma'am?\n");
}