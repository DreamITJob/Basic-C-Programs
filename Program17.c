//C program to demonstrate Linked list...

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
//function for creating a Linked list node
struct node * CreateNode(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}

//function for printing linked list
void printlist(struct node *h)
{
	if (h==NULL)
	printf("Linked list not created");
	else
	while(h!=NULL)
	{
		printf("%d-->",h->data);
		h=h->next;
	}
	
}

int main()
{
	struct node *head=CreateNode(5);
	struct node *node1=CreateNode(10);
	head->next=node1;
	struct node *node2=CreateNode(20);
	node1->next=node2; //linked list created is 5->10->20
	printlist(head);
	
 	return 0;
}
