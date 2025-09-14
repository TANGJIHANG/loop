#include<stdio.h>
#include<math.h>

//输入函数
int inPut()
{
    printf("Please input an integer : \n");
    int a;
    scanf("%d",&a);
    return a;
}

//determine whether this number is 2^x?
void determine()
{
    int ret = inPut();
    for(int i = 0;i < 32;i++)
    {
        if(pow(2,i) == ret)
        {
            printf("yes!\n");
            return ;
        }
    }
    printf("no!\n");
}

int main()
{
    determine();
    return 0;
}