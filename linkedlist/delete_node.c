#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
        int node_no;
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
	printf("\n node no is %d\n",temp->node_no);
	printf("\n\n data is  %d \n",temp->data);
	temp=temp->next;

}

printf("_____________________________\n");

}


void delete_node(struct node **head_catch,int node_no)
{

struct node *temp,*prev;

temp=*head_catch;

printf("in delete node\n");

while(temp!=NULL)
{

if(temp->node_no==node_no)
{

prev->next=temp->next;

printf("match\n");

temp=temp->next;

}
else
{

printf("else\n");

prev=temp;

temp=temp->next;


}


}

printf("delete node completed ....\n");


}


void add_node(struct node **head_catch)
{
struct node *temp;


 temp=malloc(sizeof(struct node));
			
 printf("Enter the data\n");
 scanf("%d", &(temp->data));		

printf("Enter the node no\n");
scanf("%d",&(temp->node_no));

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
char flag=1,node_no;

struct node *head=NULL , temp;

	while(flag)
	{
	printf("Enter the option \n 1.add a node \n 2.print the node \n 3.delete node  4.exit \n");

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
			
			printf("Enter the node_no to delete\n");
			scanf("%d",&node_no);

			delete_node(&head,node_no);
			
			flag=1;	
			break;

		case 4:
                        printf("inside exit case \n");		
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
