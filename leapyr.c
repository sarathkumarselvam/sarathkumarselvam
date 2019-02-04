#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("enter the yr:\n");
    scanf("%d",&year);
    if(year%4==0)
       {
            if(year%100==0)
            {
                if(year%400==0)
                    printf("%d leap yr is:\n",year);
                else
                    printf(" %d not:\n",year);
            }
           else
            printf("%d leap year:\n",year);
       }
               else
                printf("%d not :\n",year);
    return 0;
}
