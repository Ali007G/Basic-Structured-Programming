
#include<stdio.h>
int main()
{
    float area, length, width;
    //int length;
    //int width;
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("area of rectangle is: %.4f", area);

}
