#include <stdio.h>
void jolly(void);
void deny(void);
/**
 * main - Entry point
 * jolly - prints Jolly good message
 * deny - prints the final line
 * Description: program has two other functions which produces the following output
 * - For he's a jolly
 * - For he's a jolly
 * - For he's a jolly
 * - Which nobody can deny!
 * 
 * Return: 0
*/
int main(void)
{
    printf("For he\'s a jolly good fellow!\n");
    printf("For he\'s a jolly good fellow!\n");
    jolly();
    deny();
    return (0);
}

void jolly(void)
{
    printf("For he\'s a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
