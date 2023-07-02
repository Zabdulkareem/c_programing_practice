#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This program gets and returns the largest number input
 * by a user
 * Return: Always 0
*/
int main(void)
{
    int num;
    int max = -100000;
    int counter = 5;

    printf("Enter numbers or exit the program by inputing -1\n");
    while (counter)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == -1)
        {
            break;
        }
        counter--;
        if (num > max)
            max = num;
    }
    printf("The greatest number is: %d\n", max);
    // else
    //     printf("You have entered no valid number");
    
    return (0);
}

/********************************************************************************************************************************************************
 #include <stdio.h>

int main(void)
{
    int number;
    int max = -100000;
    int counter = 0;

    printf("Enter numbers (enter -1 to finish):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if (number == -1)
            break;

        counter++;
        
        if (number > max)
            max = number;
    }

    if (counter > 0) {
        printf("The largest number entered was: %d\n", max);
    } else {
        printf("No valid numbers were entered.\n");
    }

    return 0;
}
*/

/******************************************************************************************************************************************************************/
/*
int main(void)
{
    int number;
    int max = -100000;
    int counter = 0;

    do {
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number != -1) 
            counter++;
        if(number > max)
            max = number;
    }
	while (number != -1);
    if(counter)
        printf("The largest number is %d \n",max);
    else 
        printf("Hey, you haven't entered any number!");
    return 0;
} */