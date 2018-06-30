//C program to calculate factorial of a number using while loop...

#include<stdio.h>

int main()
{
	int number;
	long result=1;  //to store large value we are using long.
	int i;
	printf("Enter the number ");
	scanf("%d",&number);
	i=number;
	while(i>0)
	{
		result=result*i;
		i--;
	}
	
	printf("Factorial of %d is %ld",number,result);
	
	return 0;
}
