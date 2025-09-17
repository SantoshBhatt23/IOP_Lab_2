//program to check whether the character entered is small letter or not using conditional operator;
#include <stdio.h>
int main()
{
    char ch;
    printf("please enter a character : ");
    scanf("%c",&ch);
    (ch>='a'&&ch<='z')?printf("the character is a small letter"):printf("the character you entered is not small letter");
    return 0;

}