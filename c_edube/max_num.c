#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This function accepts numbers from users and finds
 * the greatest number in the list.
 * Return: always zero
*/
int main(void)
{
    int num;    /*temporary storage for incoming numbers*/
    int max = -100000;  /*Storage for current highest number*/

    printf("Please enter a number: ");  /*Prompt to enter first number*/
    scanf("%d", &num);      /*Saves first num*/

    while (num != -1)       /*Checks if the number entered is not -1*/
    {
        if (num > max)     /*Checks if the number is greater than the current max*/
            max = num;     /*Updates the current greatest number*/
        printf("Will you like to exit the program?");
        printf("Please Enter -1 otherwise ");
        printf("Enter the next number: ");  /*prompts to collect another num*/
        scanf("%d", &num);      /*saves the next number*/
    }

    printf("The largest number is %d\n", max);    /*Displays the largest num*/

    return (0);     /*Program was successful*/
    
}