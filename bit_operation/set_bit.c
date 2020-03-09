#include<stdio.h>
#include<stdlib.h>

void print_binary(int *rec_val)
{
int j=1;
for(int i=31; i>=0;--i)
{

  if(*rec_val & 1 << i)
	printf("1 ");
  else
	printf("0 ");


  if(j==4)
  {
	  printf("  ");
	  j=1;
  }
  else
  {
	  ++j;
  }


}

printf("\n");

}

void set_bit(int *input_val,int bit_no)
{

*input_val= *input_val |  (1 << bit_no);

}

int main()
{

int *input_val,bit_no;

input_val = malloc(sizeof(int));

printf("Enter input: ");
scanf("%d",input_val);

printf("Enter the bitnumber to set \n");
scanf("%d",&bit_no);

set_bit(input_val,bit_no);

print_binary(input_val);









free(input_val);

}



