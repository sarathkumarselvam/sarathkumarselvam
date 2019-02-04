#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the ch:\n");
    scanf("%c",&ch);
    if(ch=='A'|| ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'|| ch=='o'|| ch=='U'|| ch=='u')

        printf("%c the given is vowel:\n",ch);
        else
        printf("%c the given is not vowel:\n",ch);

            return 0;
}
