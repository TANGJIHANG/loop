#include<stdio.h>

int sum = 0;

void addFunc()
{
    for(int i = 1;i <= 100;i++)
    {
        if(i%2 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n",sum);
}

int main()
{
    addFunc();
    return 0;
}