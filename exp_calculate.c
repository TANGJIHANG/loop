#include<stdio.h>

long long myPow(long long a)
{
    long long ret = a;
    for(long long i = 1;i < a;i++)
    {
        ret = a*ret;
    }
    return ret;
}

void calculate()
{
    long long ret = 0;
    for(long long i = 1;i <= 10;i++)
    {
        ret += myPow(i);
    }
    printf("%d\n",ret);
}

int main()
{
    calculate();
    return 0;
}