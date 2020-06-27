#include<stdio.h>
#include<stdlib.h>

int *ptr,op,sp=0,data;
void push(void)
{

printf("Enter the data\n");
scanf("%d",&data);

ptr[sp]=data;
++sp;



}

void pop(void)
{

if(sp!=0)
{
--sp;
}

ptr[sp]=0;

}

void print_stack(void)
{

for(int i=0;i<sp;i++)
{

printf("____________________\n");
printf("        %d          \n",ptr[i]);
printf("____________________\n");
}

}


void main()
{

ptr=malloc(sizeof(int)*256); //1024 Bytes / 1KB  stack

while(1)
{

printf("ADD or delete the data ?   1.Add  2.delete  3.quite\n");
scanf("%d",&op);

if(op==1)
push();
else if(op==2)
pop();
else
break;


print_stack();

}


}
