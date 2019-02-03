#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number;
    printf("enter the number:\n");
    scanf("%lf",&number);
    if(number<=0.0)
    {
        if(number==0.0)
        printf("entered value is 0");
    else
        printf("entered value is negative");
}
else
    printf("entered value is positive");
    return 0;
}
