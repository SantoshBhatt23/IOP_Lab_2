//program to calculate powers without using math.h
#include <stdio.h>
int main()
{
    int n , p , r =1,i ;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter the power: ");
    scanf("%d",&p);
    for (i = 1 ; i<=p ; i++)
    {
        r *= n;
    }
    printf("result = %d",r);
    return 0;

}
