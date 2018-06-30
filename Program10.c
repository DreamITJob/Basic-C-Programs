//C program using array.....

#include<stdio.h>

int main()
{
	int arr[10];
	int i;
	//store 1 to 10 values in array...
	for(i=0;i<10;i++)
	{
		arr[i]=i+1;
	}
	//print the values of array...
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
