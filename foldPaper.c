#include<stdio.h>
#include<math.h>

int foldHigh()
{
    double thickness = 0.1;
    for(int i = 1;i < 30;i++)
    {
        int a = pow(2,i);
        if (a*thickness>=8844430.0)
        {
            printf("need to fold %d times! \n",i);
            break;
        }
    }
}

int main()
{
    foldHigh();
    return 0;
}