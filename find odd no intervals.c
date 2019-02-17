#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,m,n;
    printf("enter the no btwn m nd n:\n");
    scanf("%d%d",&m,&n);
    for(num=m;num<=n;num++)
    {
        if(num%2 == 1)
            printf("%d "  ,num);
    }
    return 0;
}
