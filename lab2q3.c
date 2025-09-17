//Program to print max among three numbers using conditional operators;
#include <stdio.h>
int main()
{  
    int num1 , num2 , num3;
    int max1 , max2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number : ");
    scanf("%d",&num2);
    printf("enter the third number : ");
    scanf("%d",&num3);
    
    max1 = num1>num2?num1:num2;
    max2 = max1>num3?max1:num3;
    printf("the greatest number is : %d",max2);
    return 0;
}