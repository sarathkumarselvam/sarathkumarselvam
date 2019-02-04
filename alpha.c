#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the alpha:\n");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("the value is alpha:\n");
    else
        printf("it is invalid:\n");
    return 0;
}
