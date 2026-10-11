/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int num, i, Prime = 1;

    printf("Enter an value: ");
    scanf("%d", &num);

    if (num < 2)
    {
        Prime = 0;
    }
    else
    {
        for (i = 2; i <= num / i; i++)
        {
            if (num % i == 0)
            {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime == 1)
    {
        printf("%d is a Prime number.\n", num);
    }
    else
    {
        printf("%d is Not a Prime number.\n", num);
    }

    return 0;
}
