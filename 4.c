/* (4) Write a C program to convert a binary number to octal number.*/

#include<stdio.h>

    int main()
{
    long int bnum,onum=0,j=1,rem;
    printf("Enter the value for binary number:");
    scanf("%ld",&bnum);
    while(bnum!=0)
    {
    rem=bnum%10;
    onum=onum+rem*j;
    j=j*2;
    bnum=bnum/10;
    }
    printf("Equivalent of binary number is %lo in octal :",onum);
    return 0;
}
