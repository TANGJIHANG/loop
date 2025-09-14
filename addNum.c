#include<stdio.h>

//创建全局变量
int sum = 0;

//求和函数
void addFunc()
{
    for(int i = 1;i <= 5;i++)
    {
        sum += i;
    }
    printf("%d\n",sum);
}

int main()
{
    addFunc();
    return 0;
}