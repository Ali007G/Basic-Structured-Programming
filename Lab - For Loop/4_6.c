/// for inside if, break, continue
/// if(condition)

#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter last number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(i%3==0)/// 3 5 6 9 10 12 15 18 20
        {
            printf("%d\n", i);
        }
     /*   if(i%5==0)
        {
             printf("%d\n", i);

        }
        */
    }

    return 0;
}
