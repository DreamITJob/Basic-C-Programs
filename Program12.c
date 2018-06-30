//C program using pointers.....

#include<stdio.h>

int main()
{
	int i=10;
	char ch= 'A';
	int *p; //interger pointer
	p=&i; //pointer contains the address 
	char *c; //character pointer
	c=&ch;
	//to see which value pointer is pointing to
	printf(" pointer pointing to integer %d\n",*p);
	printf(" pointer pointing to character %c\n",*c);
	//to see what is the value in pointer
	printf(" integer pointer contains value %d\n",p);
	printf(" character pointer contains value %d\n",c);
	
	return 0;
}
