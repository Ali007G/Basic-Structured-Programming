#include<stdio.h>

int main()
{
    ///triangle area= 1/2 (0.5) * a * b; a= 2.5, 5 6
    /// circle area = pi * r * r - (pi 3.1416)
    int a, b;
    float area;

    printf("Enter the number of a: \n");
    scanf("%d", &a);
    printf("Enter the number of b: \n");
    scanf("%d", &b);

    area = 0.5 * a * b; // area = 3.1416 * r * r

    printf("area of triangle is: %.3f", area);

    return 0;
}

