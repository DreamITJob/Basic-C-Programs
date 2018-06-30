//C program for Declaring an integer,float and character....

#include<stdio.h>

int main()
{
    char ch;
	int value1; //Declare an integer value
    float value2;
    
    printf("Enter an Character value\n"); //Asking for user to enter a character //'\n' used for new line
    scanf("%c",&ch);					//Taking input from user
    printf("Enter an integer value\n"); 
    scanf("%d",&value1); 
    printf("Enter an Float value\n");
    scanf("%f",&value2);
    printf("Character value is %c\n",ch); //Printing output value  
    printf("Interger value is %d\n",value1); 
    printf("Float value is %f\n",value2);
  
    return 0;
}
