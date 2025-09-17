//program to print max among three numbers using && operators.
#include <stdio.h>
int main()
{
    int num1 , num2 , num3;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number : ");
    scanf("%d",&num2);
    printf("enter the third number : ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("%d is greatest",num1);
    else if (num2 > num3 && num2>num1)
        printf("%d is greatest",num2);
    else if (num3>num1 && num3 > num2)
        printf("num3 is greatest");
    return 0;
}