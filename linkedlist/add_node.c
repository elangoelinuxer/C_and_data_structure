#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head_ptr=NULL; 



void print_node(struct node **head_catch)
{

struct node *temp;

temp=*head_catch;


printf("_____________________________\n");

while(temp != NULL)
{
	printf("\n\n%d \n",temp->data);
	temp=temp->next;

}

printf("_____________________________\n");

}


void add_node(struct node **head_catch)
{
struct node *temp;


 temp=malloc(sizeof(struct node));
			
 printf("Enter the data\n");
 scanf("%d", &(temp->data));		


if(*head_catch==NULL)
{
	*head_catch=temp;
	temp->next = NULL;
}
else
{
  	
temp->next=*head_catch;
*head_catch=temp;

}


}


int main()
{

int option ;
char flag=1;

struct node *head=NULL , temp;

	while(flag)
	{
	printf("Enter the option \n 1.add a node \n 2.print the node \n 3.exit \n");

	scanf("%d",&option);

	switch(option)
	{	
	
		case 1:
			
			add_node(&head);	


			break;

		case 2:

			print_node(&head);

			break;

		case 3:
		
			flag=0;	
			break;

			
		default:
				
			printf("Enter the correct  option\n");

			break;
	
	}



	}

	printf("Freeing memory ...\n");
while(head)
{
  free(head);

 head=head->next;

}


}
