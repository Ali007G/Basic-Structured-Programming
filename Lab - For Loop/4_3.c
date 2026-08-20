/*
#include<stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}

*/





/*
/// Multiplication Table of 5
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}
*/


///Input a Number and Print Table
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

