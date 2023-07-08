#include <stdio.h>
void br(void);
void ic(void);

/**
 * main - entry point
 * br - prints Brazil and Russia
 * ic - prints india and china
 * 
 * Description: These functions prints the countries mentioned above
 * Return: Always 0)
*/
int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
    return (0);
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}