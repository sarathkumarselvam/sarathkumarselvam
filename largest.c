#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("enter the value:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>=n2)
    {
        if(n1>=n3)
            printf("%d the largest no:\n",n1);
        else
            printf("%d the largest no:\n",n2);
        }
        else
        {
        if(n2>=n3)
            printf("%d the largest no:\n",n2);
        else
            printf("%d the largest no:\n",n3);
        }
    return 0;
}
