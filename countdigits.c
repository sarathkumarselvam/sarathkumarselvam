#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    int count=0;
    printf("enter the value:\n");
    scanf("%lld",&n);
    while(n !=0)
    {
        n /= 10;
        ++count;
    }
    printf("no of digits:%d\n",count);
    return 0;
}
