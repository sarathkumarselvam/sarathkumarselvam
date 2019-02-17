  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,end,isprime;
    printf("enetr the no 1 to:\n");
    scanf("%d",&end);
    printf("the prime no btwn 1 to %d:",end );
    for(i=2;i<=end;i++)
    {
        isprime=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
