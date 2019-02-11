#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exponent;
    long long result=1;
    printf("the base value is:\n");
    scanf("%d",&base);
    printf("the exponent value is:");
    scanf("%d",&exponent);
    while (exponent !=0)
    {
        result *= base;
        --exponent;
    }
    printf("the answer is :%lld",result);
    return 0;
}
