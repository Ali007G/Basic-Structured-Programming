#include<stdio.h>
int main()
{
    int number, choice;
    printf("1. Check Even\n2. Check Odd:\n ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &number);
 switch(choice)
 {
  case 1:
      if(number%2==0)
      {
       printf("%d is even", number);
      }
      else
      {
        printf("%d is not even", number);
      }
        break;
  case 2:
    if(number%2!=0)
    {
        printf("%d is odd", number);
    }
    else
    {
        printf("%d is not odd", number);
    }
        break;
  default:
    printf("Invalid choice");

}
return 0;
}

