//C program to demonstrate call by reference...

#include<stdio.h>

void swap(int *, int *);

int main()
{
	int number1=5;
	int number2=10;
	printf("Number1 is %d and Number2 is %d \n",number1,number2);
	swap(&number1,&number2);//function calling by call by reference parameter passing technique
	printf("Number1 is %d and Number2 is %d ",number1,number2);//number after swapping
	
 	return 0;
}

void swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
