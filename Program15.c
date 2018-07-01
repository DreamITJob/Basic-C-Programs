//C program using Strings
//Read about how to pass strings to functions
//Take help : https://www.geeksforgeeks.org/storage-for-strings-in-c/

#include<stdio.h>

int main()
{
	char str1[6]={'K','a','r','a','n','\0'};    // '\0' is string terminator 
	char str2[8];
	char str3[10]="Good work";
	char *str4="You are learning fast";
	
	printf("%s\n",str1);
	//enter values for second string
	printf("Enter some string ");
	scanf("%s",&str2);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("%s\n",str4);
	
 	return 0;
}
