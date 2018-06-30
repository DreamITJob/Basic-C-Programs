//C program for use of do while loop...

#include<stdio.h>

int main()
{
	int number;
	int sum=0;
	do
	{
		printf("Enter the number ");
		scanf("%d",&number);
		sum+=number;
	}
	while(number>0);
	
	printf("Total sum is %d ",sum);
	
	return 0;
}
