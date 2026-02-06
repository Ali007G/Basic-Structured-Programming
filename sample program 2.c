#include<stdio.h>

int main()
{
    int number_1 = 10, number_2 = 5;
    //int number_2 = 5;
    int result1 = number_1 + number_2;
    float number_3 = 10.5;
    float number_4 = 5.56;
    float result2 = number_3 - number_4;
    int mul, division;

    //printf("%d", number_1 + number_2); /// 10 + 5 = 15
    printf("Addition is: %d\n", result1);
    printf("Subtraction is: %.4f\n", result2);
    printf("Multiplication is: %d\n", number_1 * number_2);
    printf("Division is: %d\n", number_1 / number_2);

}
