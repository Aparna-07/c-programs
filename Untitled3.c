#include<stdio.h>
#include<conio.h>
int main()
{

	long int i=0;
	char octnum[1000];
	printf("Enter any Octal Number : ");
	scanf("%s",octnum);
	printf("Equivalent Binary Value = ");
	while(octnum[i])
	{
		switch(octnum[i])
		{
			case '0' : printf("000");
				break;
			case '1' : printf("1");
				break;
			case '2' : printf("10");
				break;
			case '3' : printf("11");
				break;
			case '4' : printf("100");
				break;
			case '5' : printf("101");
				break;
			case '6' : printf("110");
				break;
			case '7' : printf("111");
				break;
			default : printf("\nInvalid Octal Digit %c",octnum[i]);
				break;
		}
		i++;
	}
	getch();
	return 0;
}
