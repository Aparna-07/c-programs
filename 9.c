/*(9) Write a C program to compute the following series using function:
X=1+a/1!+a^2/2!+a^3/3!+…*/
#include<stdio.h>
int main()
{

    int a,i,limit,sum = 1;


    printf("Enter any number: ");
    scanf("%d",&a);
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
     sum=sum+(series(a,i)/Fact(i));
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
    int Fact(int num)
    {
        int f;
        if(num==1)
        return 1;
        else
        f=num*Fact(num-1);

        return f;
    }
