#include <stdio.h>
 int main()
{
char char;
 printf("Enter a character\n");
  scanf("%c", &char);
 if (char == 'a' || char == 'A' || char == 'e' || char == 'E' || char == 'i' || char == 'I' || char =='o' || char=='O' || char == 'u' || char == 'U')
    printf("%c is a vowel.\n", char);
  else
    printf("%c is not a vowel.\n", char);
 
  return 0;
}
