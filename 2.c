/* (2) Write a C program to find factorial of a number using recursion function. */
#include<stdio.h>;

int Fact(int num)
{
int f;
if(num==1)
return 1;
else
f=num*Fact(num-1);

return f;
}
int main()
{
int x,y,z;
printf("Enter the number\n");
scanf("%d",&x);
printf("The factorial of %d is %d \n",x,(Fact(x)));
return 0;
}
