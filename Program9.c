//C program using Switch statement....

#include<stdio.h>

int main()
{
	int number1;
	int number2;
	int choice,result;
	printf("Enter the first number ");
	scanf("%d",&number1);
	printf("Enter the second number ");
	scanf("%d",&number2);
	printf("Menu\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
		{
		
		case 1: result=number1+number2;
				printf("Result of Addition is %d\n",result);
				break;
		case 2: result=number1-number2;
				printf("Result of Subtracton is %d\n",result);
				break;
		case 3: result=number1*number2;
				printf("Result of Multiplication is %d\n",result);
				break;
		case 4: result=number1/number2;
				printf("Result of Division is %d\n",result);
				break;
		default: 
				printf("Sorry you have entered wrong choice!");
		}
	
	
	return 0;
}
