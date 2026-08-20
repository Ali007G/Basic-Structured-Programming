#include<stdio.h>
int main()
{
    int number;
    printf("Enter number: ");///2
    scanf("%d", &number);///2

 switch(number) ///2
 {
  case 1:
    printf("One\n");
    break;
  case 2:
    printf("Two\n");
    break;
  case 3:
    printf("Three\n");
    break;
  default:
    printf("Four\n");

}
return 0;
}
