#include <stdio.h>
void one_three(void);
void two(void);

/**
 * main - Entry point
 * one_three - display the word 'one'
 * two - prints the word 'two' to the stdout
 * 
 * Description: program that calls a function named one_three() . This function should display the word one on one line, call a second function named two(),
 * then display the word three on one line. The function two() should
 * display the word two on one line. The main() function should display the phrase
 * starting now: before calling one_three() and display done! after calling it. Thus, the
 * output should look like the following:
 * *starting now:
 * *one
 * *two
 * *three
 * *done!
 * Return: Always zero
*/
int main(void)
{
    printf("starting now: \n");
    one_three();
    two();
    printf("three\n");
    printf("done!\n");
    return (0);
}

void one_three(void)
{
    printf("one\n");
}

void two(void)
{
    printf("two\n");
}