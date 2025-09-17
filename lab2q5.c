//simple calculator using switch-case.
#include <stdio.h>
int main()
{
    int num1,num2,ask_op;
    printf("please enter the first number: ");scanf("%d",&num1);
    printf("please enter the second number: ");scanf("%d",&num2);
    printf("enter 1 for add , 2 for substract , 3 for multiplication and 4 for divison\n");
    scanf("%d",&ask_op);
    switch (ask_op){
        case 1 : printf("num1 + num2 = %d",num1 + num2);
                 break;
        case 2 : printf("num1 - num2 = %d",num1 - num2);
                 break;
        case 3 : printf("num1 * num2 = %d",num1 * num2);
                 break;
        case 4 : printf("num1 / num2 = %f", (1.0 * num1)/num2);
                 break;
    }
    return 0;

}