#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int number,originalnumber,remainder,result=0,n=0;
    printf("enter thge no:\n");
    scanf("%d",&number);
    originalnumber = number;
    while(originalnumber !=0)
    {
        originalnumber /=10;
        ++n;
    }
    originalnumber = number;
    while(originalnumber !=0)
    {
        remainder = originalnumber%10;
        result += pow(remainder, n);
        originalnumber /=10;
    }
    if(result == number)
        printf("%d is a armstrong",number);
    else
        printf("%d is not a armstrong",number);
    return 0;
}
