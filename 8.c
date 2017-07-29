/*(8) Write a C program to compute the following series using function:
a+a^a+a^a^a+... */
#include<stdio.h>
int main()
{

    int a,i,limit,sum = 0;


    printf("Enter any number: ");
    scanf("%d",&a);
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
     sum=sum+series(a,i);
    }
    printf("Sum of the series : %d",sum);
    return 0;
}

    int series(int x,int y)
    {
        int i,p=1;
        for(i=1;i<=y;i++)
        {
            p=p*x;
        }
        return p;
    }
