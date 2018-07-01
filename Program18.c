//C program to Demonstrate Recursion.....

#include<stdio.h>

//Recursive function to add digits of a number
int SumOfDigits(int num)
{
	static int sum=0;
	if (num==0)
	return sum;
	sum=num%10 + SumOfDigits(num/10);
}

int main()
{
	int number;
	printf("Enter the number ");
	scanf("%d",&number);//suppose number enter is 54321
	int result=SumOfDigits(number);
	printf("Sum of digits of number is %d",result);//output is 5+4+3+2+1=15

 	return 0;
}
