#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=2;
    printf("enter the no\n");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i ==0)
        {
            printf("%d is not a primeno:\n",n);
            break;
        }
    }
    if(i==n)
        printf("%d prime no:",n);
    return 0;
}
