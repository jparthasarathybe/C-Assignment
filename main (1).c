/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    if (value % 2 == 0)
    {
        printf("%d is an Even number.\n", value);
    }
    else
    {
        printf("%d is an Odd number.\n", value);
    }

    return 0;


}