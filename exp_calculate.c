#include<stdio.h>

long long myPow(int a)
{
    long long ret = a;
    for(int i = 1;i < a;i++)
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
    //printf("%d\n",ret);
    //错误原因：long long 的占位符是 %lld
    printf("%lld\n",ret);
}

int main()
{
    calculate();
    return 0;
}