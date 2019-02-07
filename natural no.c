#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("enetr the positive no:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("sum is:%d",sum);
    return 0;
}
