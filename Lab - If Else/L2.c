#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("Divisible by 3\n");
    }

    if (num % 5 == 0) {
        printf("Divisible by 5\n");
    }

    if (num % 7 == 0) {
        printf("Divisible by 7\n");
    }

    return 0;
}
