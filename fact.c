#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact=1;
    printf("enter the value:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("the fact is:%d",fact);
    return 0;
}
