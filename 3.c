/* (3) Write a C program to find GCD (or HCF) using recursion function.*/

#include<stdio.h>

int gcd(int p,int q)
{
    if(p>q)
    {
        if(q==0)
        return p;
    return gcd(q,p%q);
    }
    else
    {
        if(p==0)
        return q;
    return gcd(p,q%p);
    }
}
int main()
{

    int x,y;
    printf("Enter two positive integers\n");
    scanf("%d %d",&x,&y);
     printf("The GCD between %d and %d is %d\n",x,y,gcd(x,y));
     return 0;
}
