/* (1) Write a C program to display prime numbers between two intervals using function. */
#include<stdio.h>;

int CheckPrime(int num)
{
    int i,c=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            c++;
    }
    if(c==2)
        return 1;
}
int main()
{
    int x,y,z;
printf("Enter the beginning of the interval\n");
scanf("%d",&x);
printf("Enter the ending of the interval\n");
scanf("%d",&y);
printf("The Prime numbers between the given interval %d and %d are: \n",x,y);
for(z=x;z<=y;z++)
{
    if(CheckPrime(z)==1)
        printf("%d\n",z);
}
}
