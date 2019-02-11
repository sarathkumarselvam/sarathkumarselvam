#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse =0,t;
    printf("check the no is palindrome:\n");
    scanf("%d",&n);
    t =n;
    while(t !=0)
    {
        reverse = reverse*10;
        reverse = reverse+ t%10;
        t= t/10;
    }
    if(n == reverse)
        printf("%d is palindrome no\n",n);
    else
        printf("%d is not a plaindrome\n",n);
    return 0;
}
