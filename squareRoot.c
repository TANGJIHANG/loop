#include<stdio.h>
#include<math.h>

void square()
{
    printf("Please input an integer(>0) : ");
    int a;
    scanf("%d",&a);
    for(int i = 0;i < 46341;i++)
    {
        if(pow(i,2) == a)
        {
            printf("%d is %d's square!\n",i,a);
            break;
        }
        if(pow(i,2) > a)
        {
            printf("%d is %d's square!\n",i-1,a);
            break;
        }
    }
}

int main()
{
    square();
    return 0;
}