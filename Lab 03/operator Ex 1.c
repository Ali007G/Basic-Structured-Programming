#include<stdio.h>
int main()
{
    int x = 10;
    int y = 3;
    //double c =10.0;
    //double d = 3.0;
printf("Arithmetic Operator Example:\n");
    printf("%d\n", x + y); // 13
    printf("%d\n", x - y); // 7
    printf("%d\n", x * y); // 30
    printf("%d\n", x / y); // 3
    printf("%d\n", x % y); // 1
   // printf("%f\n", c / d);

printf("Increment/Decrement Operator Example:\n");
    int z = 5;
    //z++;
    printf("%d\n", z); // 6
    --z;
    printf("%d\n", z); // 5

printf("Comparison Operator Example:\n");
      int p = 15;
      int q = 13;
      printf("%d\n", p > q); // returns 1 (true) because 5 is greater than 3
      printf("%d\n", 12 != 13); // Prints 1 (true), because 10 is equal to 10 (>=, <=)

printf("Logical Operator Example:\n");
        int logic_x = 5;
        int logic_y = 3;
        printf("%d\n", logic_x > 3 && logic_x > 10); // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
        printf("%d\n", !(logic_x > 3 || logic_x < 10));
}
/// 5>3 && 5>10 --- 1 && 0 -- 0
/// !5>3 && 5<10 --- !1 && 1 -- 1 -- 0
