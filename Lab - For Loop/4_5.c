#include <stdio.h>

int main()
{
    int i;
    int fact = 1;

    for(i = 1; i <= 5; i++)
    {
        fact = fact * i;
             //= 1 * 1 =1
            // = 1 * 2 = 2
            // = 2 * 3 = 6
            // = 6 * 4 = 24
            // = 24 * 5 = 120
    }

    printf("Factorial = %d", fact);

    return 0;
}
