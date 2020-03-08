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

void mask(int *rec_val , int start_bit, int end_bit)
{

int mask_bits=0x0;


for ( ; start_bit<=end_bit; ++start_bit)
{

mask_bits = mask_bits | (1<<start_bit);

}

*rec_val=*rec_val & mask_bits;


}

int main()
{

int *input_val;
int start_bit , end_bit;

input_val = malloc(sizeof(int));

printf("Enter input: ");
scanf("%d",input_val);

printf("Input Entered:  %d\n",*input_val);
print_binary(input_val);

printf("Enter the  start bit \n");
scanf("%d" ,&start_bit);

printf("Enter the  end  bit \n");
scanf("%d" ,&end_bit);

mask(input_val ,start_bit,end_bit);

print_binary(input_val);
free(input_val);
}



