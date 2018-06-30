// Program for arithematic operations in C.....

#include<stdio.h>

int main()
{
	int variable1;
	int variable2;
	int result;
	printf("Enter value for variable1 ");
	scanf("%d", &variable1);
	printf("Enter value for variable2 ");
	scanf("%d", &variable2);
	result = variable1 + variable2;
	printf("Result of + operator is %d\n",result);
	result = variable1 - variable2;
	printf("Result of - operator is %d\n",result);
	result = variable1 * variable2;
	printf("Result of * operator is %d\n",result);
	result = variable1/variable2;
	printf("Result of / operator is %d\n",result);
	result = variable1%variable2;
	printf("Result of Remainder operator is %d\n",result);

	
	return 0;
}
