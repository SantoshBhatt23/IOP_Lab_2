//program to calculate factorial of a number.
#include <stdio.h>
int main()
{
    int num,fac,i;
    printf("enter the num>=0 whose factorial you want to calulate...");
    scanf("%d",&num);
    if (num == 0)
        fac = 1;
    else if(num > 0)
    {
        fac = 1;
        for (i = 2; i<=num ;)
        {
            fac = fac* i ;
            i = i+1;
        }
    }
    else
        printf("wrong input.");
    printf("%d factorial = %d",num,fac);
    return 0;
}