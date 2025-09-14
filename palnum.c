#include<stdio.h>
#include<math.h>



int myPow(int base, int exp)
{
    int ret = 1;
    for(int i = 0;i < exp;i++)
    {
        ret *=base; 
    }
    return ret;
}



int getDigit(int a)
{
    for(int i = 0;i < 11;i++)
    {
        a /= 10;
        //未定义问题解决：把a当成参数传递
        if(a == 0)
        {
            return i+1;
        }
    }
}

void determine(int a)
{
    int b = getDigit(a);
    int pole1 = 0;
    int pole2 = 0;
    if(b%2 == 0)
    //if this is an even number
    {
        
        for(int i = 1;i <= b/2;i++)
        {
            //if(a/pow(10,i-1)%10 == a/pow(10,b - i))
            //pow return double number:::
            if(a/myPow(10,i - 1)%10 == a/myPow(10,b - i)%10)
            {
                pole1 += 1;
            }
        }
    }

        if(b%2 == 1)
    //if this is an odd number
    {
        
        for(int i = 1;i <= b/2;i++)
        {
            //if(a/pow(10,i-1)%10 == a/pow(10,b - i))
            //pow return double number:::
            if(a/myPow(10,i - 1)%10 == a/myPow(10,b - i)%10)
            {
                pole2 += 1;
            }
        }
    }
    if(pole1 == b/2||pole2 ==b/2)
    {
        printf("this is a palnum! \n");
        return;
    }
    printf("this is not a palnum! \n");

}


int main()
{
    printf("Please input an integer : \n");
    int a = 0;
    scanf("%d",&a);
    determine(a);
    //printf("%d\n",getDigit());
    return 0;
}