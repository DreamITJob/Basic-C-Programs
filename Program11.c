//C program for declaring,defining,calling functions....

#include<stdio.h>
//Read about how fuction is called?
//what is actual parameters and formal parameters?
//Parameter passing techniques
int addition(int,int); //Declaring a function
int subtraction(int,int);
int multiplication(int,int);
void division(int,int);

int main()
{
	int number1;
	int number2;
	int result;
	printf("Enter first number ");
	scanf("%d",&number1);
	printf("Enter second number ");
	scanf("%d",&number2);
	result = addition(number1, number2); //calling a function
	printf("Result of addition is %d\n",result);
	result = subtraction(number1, number2);
	printf("Result of Subtraction is %d\n",result);
	result = multiplication(number1, number2);
	printf("Result of multiplication is %d\n",result);
	division(number1,number2);
	return 0;
}

int addition(int num1,int num2)
{
	return num1+num2;
}

int subtraction(int num1,int num2)
{
	return num1-num2;
}

int multiplication(int num1,int num2)
{
	return num1*num2;
}

void division(int num1,int num2) //fuction that is not returning anything
{
	float result=num1/num2;
	printf("Result of division is %.2f\n",result);
}
