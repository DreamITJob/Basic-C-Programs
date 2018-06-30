//Program for increment, decrement operator

#include<stdio.h>

int main()
{
	int variable;
	int result;
	
	printf("Enter value for variable ");
	scanf("%d",&variable);
	//increment operator is like variable=variable+1
	result = variable++;     
	printf("Result of post increment operator is %d\n",result);
	result= ++variable;
	printf("Result of pre increment operator is %d\n",result);
	//decrement operator is like variable=variable-1
	result = variable--;     
	printf("Result of post decrement operator is %d\n",result);
	result= --variable;
	printf("Result of pre decrement operator is %d\n",result);
	
	return 0;
}

