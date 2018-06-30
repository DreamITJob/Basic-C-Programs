//C program to understand For loop.....

#include<stdio.h>

int main()
{
	int number=10;
	int i;
	//print table of 10
	for(i=1;i<=number;i++)
	{
		printf("%d ",i*number);
	}
	printf("\n");
	//print value from 1 to 100
	for(i=1;i<=100;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
