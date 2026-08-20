/// for inside if, break, continue
/// if(condition)

#include<stdio.h>
int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i==5)/// 1 2 3 4  6 7 8 9 10 break(5) continue
        {
            continue;
        }
        if(i == 7)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
