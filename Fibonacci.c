/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of terms.\n");
    }
    else
    {
        printf("Fibonacci Series: ");

        for (i = 1; i <= n; i++)
        {
            printf("%d ", first);

            next = first + second;
            first = second;
            second = next;
        }

        printf("\n");
    }

    return 0;
}
