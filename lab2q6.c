//simple calculator using "switch-case" with case in char form.
#include <stdio.h>
int main()
{
    int num1,num2;
    char operation;
    printf("enter a for add , s for subst , m for multiply and d for div.\n");
    scanf("%c",& operation);
    printf("please enter the first number: ");
    scanf("%d",&num1);
    printf("please enter the second number: ");
    scanf("%d",&num2);
    switch(operation){
        case 'addition': printf("num1 + num2 = %d",num1 + num2);
                 break;
        case 'substraction': printf("num1 - num2 = %d",num1 - num2);
                 break;
        case 'multiplication': printf("num1 * num2 = %d",num1 * num2);
                 break;
        case 'division': printf("num1 / num2 = %f", (1.0 * num1)/num2);
                 break;       
    }
    return 0;

}
