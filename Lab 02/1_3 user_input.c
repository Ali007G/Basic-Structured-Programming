#include<stdio.h>

int main()
{
    int age;
    float cgpa = 3.9245;
    char grade = 'A';
    char ch[20] = "Karim";
    double marks = 85.12345;

   // printf("Your Age is: \n");
    scanf("%d %f %s", &age, &cgpa, &grade);
    printf("Age is: %d\n", age);

    printf("Your CGPA is: \n");
   // scanf("%f", &cgpa);
    printf("CGPA is: %.2f\n", cgpa);

   // printf("Your Grade is: \n");
   // scanf("%s", &grade);
    printf("Grade is: %c\n", grade);

    printf("Name: %s\n", ch);
    printf("Marks: %.4lf\n", marks);

    //printf("A");

}

