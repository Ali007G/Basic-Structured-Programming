#include<stdio.h>
int main()
{
    char op;
    printf("Enter operator: ");//
    scanf("%c", &op);///+

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); // 2 4

 switch(op) //+
 {
  case '+': /// +
    printf("Result = %d\n", a+b); // 2 4 = 6
    break;
  case '-':
    printf("Result = %d\n", a-b);
    break;
  case '*':
    printf("Result = %d\n", a*b);
    break;
  case '/':
    printf("Result = %d\n", a/b);
    break;
  default:
    printf("Invalid operator");

}
return 0;
}
