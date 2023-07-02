#include <stdio.h>

int main()
{
    int sum = 0;
    int input1, input2;
    
    while (input2 != 0)
    {
        printf("Enter the first number: \n");
        scanf("%d", &input1);
        
        printf("Enter the second number: \n");
        scanf("%d", &input2);

        sum = input1 + input2;
        printf("Sum: %d\n", sum);
    }
    if (input1 == 99 && input2 == 0)
        {
            printf("Finish.\n");
        };
    return 0;
}


/*
************************************************************************************************************************
 #include <stdio.h>

int main(void) {
    int input1;
    int input2;

    do {
        printf("Enter the first number: ");
        scanf("%d", &input1);
        
        if (input1 == 99) {
            printf("Finish.\n");
            return 0;
        }
        
        printf("Enter the second number: ");
        scanf("%d", &input2);

        printf("Sum: %d\n", input1 + input2);
    } while (input2 != 0);

    return 0;
}
*/

/*********************************************************************************************************************************
 #include <stdio.h>

int main(void) 
{
	int input1;
	int input2 = -1;
	while(input2 != 0)
	{
		scanf("%d", &input1);
		scanf("%d", &input2);
		printf("Sum: %d\n", input1 + input2);
	}
	if(input1==99)
		puts("Finish.");
	return 0;
}
*/