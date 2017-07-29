/* (6) Write a C program to convert a decimal number to octal number.*/

#include<stdio.h>

int main()
{
    int num,onum=0,d;
    printf("Enter a positive number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%8;
        onum=onum*10+d;
        num=num/8;
    }
    printf("Octal Equivalent of entered number : %d",onum);
    return 0;

}
