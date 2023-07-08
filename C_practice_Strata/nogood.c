#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: This function displays example of error
 * and semantic errors in c.
 * Return: Always zero
*/
int main(void)
(             /* First syntactic error */      
    int n, int n2, int n3;      /* Wrong declaration of variables */

    /* this program has several errors
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;       /* Semantic error, cubed should be (n * n *n) */
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)     /* no end of statement semicolon */

    return (0);
)       /* round braces instead of curly braces */ 