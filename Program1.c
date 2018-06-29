//C program for Declaring an integer,float and character....

#include<stdio.h>

int main()
{
    int value1; //Declare an integer value
    float value2;
    char ch;
    scanf("%d",&value1); //taking input from user
    scanf("%f",&value2);
    scanf("%c", &ch);
    printf("%d",value1); //Printing output value
    printf("%f",value2);
    printf("%c",ch);
    
    return 0;
}
