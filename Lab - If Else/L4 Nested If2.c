/*
Using Nested if
Write a C program that takes an input from the user and
check if a number is even or odd and whether it is positive or negative.
 Input: 7
 Output: odd and positive
Input: -8
 Output: even and negative
Input: 0
 Output: Zero is neither even nor odd
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Zero is neither even nor odd");
    }
    else {
        if (num > 0)
        {
            if (num % 2 == 0)
            {
                printf("even and positive");
            } else {
                printf("odd and positive");
            }
        }
        else
        {
            if (num % 2 == 0)
            {
                printf("even and negative");
            } else
            {
                printf("odd and negative");
            }
        }
    }

    return 0;
}
