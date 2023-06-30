#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that takes one floating-point number, converts
 * it to an integer number, and then prints a description of the given number.
 * Scenarios for numbers:
 * numbers greater than or equal to 1 and less than 2 - Very bad.
 * numbers greater than or equal to 2 and less than 3 - Bad.
 * numbers greater than or equal to 3 and less than 4 - Neutral.
 * numbers greater than or equal to 4 and less than 5 - Good.
 * numbers greater than or equal to 5 and less than 6 - Very good.
 * return: return zero always
*/

int main
{
    float average_grade;
    int final_grade = (int) average_grade;
    printf("Please enter a number: ");
    scanf("%f", &average_grade);

    if (final_grade == 1)
        printf("Very bad");
    else if (final_grade == 2)
        print("Bad");
    else if (final_grade == 3)
        print("Neutral");
    else if (final_grade == 4)
        print("Good");
    else if (final_grade == 6)
        print("Very good");
    else
        printf("mehh :x")
    return (0);
}