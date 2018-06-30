// C Program for using comparsion operators...

#include<stdio.h>

int main()
{
	int number1;
	int number2;
	printf("Enter first number ");
	scanf("%d",&number1);
	printf("Enter second number ");
	scanf("%d",&number2);
	if(number1<number2)
		printf("%d is greater than %d\n",number2,number1);
	else if(number1==number2)
		printf("Both numbers are equal");
	else
		printf("%d is greater than %d\n",number1,number2);
		
	return 0;
}
