
/*(7) Write a C program to convert an octal number to decimal number.*/
#include<stdio.h>
#include<math.h>
int main()
{

    int octal, decimal = 0;
    int i = 0,k;

    printf("Enter any octal number: ");
    scanf("%d", &octal);
    while (octal != 0)
    {
        k=octal%10;
        decimal =  decimal +k*pow(8,i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %d",decimal);
    return 0;
}
