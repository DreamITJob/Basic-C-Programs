//Prime number program using for loop and if else statement...

#include<stdio.h>

int main()
{
	int number;
	int i;
	int count=0;
	printf("Enter a number "); 
	scanf("%d",&number);
	if(number==2)							//2 is the only even prime number
	{
		printf("%d is a prime number",number);
		return;
	}
  //Please check online why we are checking upto n/2	or can check up to square root of n?
	for ( i=2;i<number/2;i++)				
	{
		if (number%i == 0)
		{
				count++; //counting the number of factors
		}	
	}
	if(count==0)
	printf("%d is a prime number",number);
	else
	printf("%d is  not a prime number",number);
	
	return 0;
}
