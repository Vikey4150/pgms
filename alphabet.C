#include <stdio.h>
int main()
{
    char cH;
    printf("Enter a character: ");
    scanf("%c",&cH);

    if( (cH>='a' && cH<='z') || (cH>='A' && cH<='Z'))
        printf("%c is an alphabet.",cH);
    else
        printf("%c is not an alphabet.",cH);

    return 0;
}
