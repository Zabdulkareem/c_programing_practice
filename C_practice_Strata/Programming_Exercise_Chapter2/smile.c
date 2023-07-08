#include <stdio.h>
void smile(void);

/**
 * main - Entry point
 * smile - Prints smile
 * 
 * Description: This function prints smile!
 * Return: zero, void
*/
int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
    return (0);   
}

void smile(void)
{
    printf("Smile!");
}