#include<stdio.h>

void turnOFF()
{
    printf("Please input an integer(>100) : \n");
    int a;
    scanf("%d",&a);
    int units = a/1%10;
    int tens = a/10%10;
    int hundreds = a/100%10;
    printf("the number is : %d\n",units*100 + tens*10 + hundreds);
}

int main()
{
    turnOFF();
    return 0;
}