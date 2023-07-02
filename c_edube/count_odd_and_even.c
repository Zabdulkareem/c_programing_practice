#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This  program counts the number of odd and even
 * number inputted by the user from the keyboard.
 * Return: Always zero
*/
int main()
{
    int odds, evens, num;
    odds = 0;
    evens = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2)
        {
            odds++;
        }
        else
        {
            evens++;
        }
        
        printf("Enter another number or exit with 0: ");
        scanf("%d", &num);
    };

    printf("Odd numbers: %d\n", odds);
    printf("Even numbers: %d\n", evens);

    return(0);
}