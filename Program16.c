//C program to deonstrate a structure in C...

#include<stdio.h>
#include<stdlib.h>  //malloc function is defined in this library..

struct student
{
	char sname[30];
	int rollno;
	int marks;
};


int main()
{
	struct student s1;
	printf("Enter first name of student\n");
	scanf("%s",s1.sname);
	s1.rollno= 123456;
	s1.marks=45;
	printf("Student name is %s\n",s1.sname);
	printf("Roll no of student is %d\n",s1.rollno);
	printf("Student marks are %d\n",s1.marks);
	
	//to understand how pointer is used for a structure...
	struct student *s2=(struct student*)malloc(sizeof(struct student));
	printf("Enter name of student\n");
	scanf("%s",s2->sname);
	s2->rollno= 65431;
	s2->marks=55;
	printf("Student name is %s\n",s2->sname);
	printf("Roll no of student is %d\n",s2->rollno);
	printf("Student marks are %d\n",s2->marks);

 	return 0;
}
