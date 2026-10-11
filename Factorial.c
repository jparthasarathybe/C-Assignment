/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
    int num, i;
    unsigned  factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative integers.\n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}
