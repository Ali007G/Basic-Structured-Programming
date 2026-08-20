/*
///Square of Numbers 1 to 5
#include<stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        printf("%d = %d\n", i, i * i);
    }

    return 0;
}
*/

/// Write a program to calculate the factorial of a given number.

#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}
