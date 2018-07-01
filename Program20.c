//C program to demonstrate macro use....
//read this : https://www.geeksforgeeks.org/interesting-facts-preprocessors-c/
#include<stdio.h>
#define pi 3.14
int main()
{
	int radius;
	printf("enter the radius ");
	scanf("%d",&radius);
	int area=pi*radius*radius;
	printf("Area of circle is %d",area);

 	return 0;
}
