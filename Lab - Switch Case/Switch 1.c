
/*
/// syntax
switch (expression) {
  case x:
    // code block 1
    break;
  case y:
    // code block 2
    break;
  default:
    // code block
}
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");/// m
    scanf("%c", &ch);/// m

 switch(ch) /// m
 {
  case 'a': //a = m
  case 'e':
  case 'i': //i == i
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    printf("Vowel\n");
    break;
  default:
    printf("Consonant\n");

}
}

