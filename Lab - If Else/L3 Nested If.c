#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        {
        if (age >= 55)
        {
            printf("Eligible to vote and also a senior citizen");
        }
    else
        {
            printf("Eligible to vote but not a senior citizen");
        }
    }
    else
    {
        printf("Not eligible to vote");
    }

    return 0;
}
