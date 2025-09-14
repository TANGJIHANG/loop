#include<stdio.h>

void printLoopNum()
{
    for(int i = 0;i < 5;i++)
    {
        printf("%d\n",5-i);
    }
}

int main()
{
    printLoopNum();
    return 0;
}