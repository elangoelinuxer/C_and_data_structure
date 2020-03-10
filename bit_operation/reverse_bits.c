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

void reverse_bits(int *input_val)
{

	char LSB,MSB;

	for(int i=0,j=31;i<=15;i++,j--)
	{


		if(*input_val & (1<<i))
		{
			LSB = 1;
		}
		else
		{
			LSB = 0;
		}

		if(*input_val & (1<<j))
		{
			MSB = 1;
		}
		else
		{
			MSB = 0;
		}

		if(LSB == MSB)
		{
			continue;
		}
		else
		{

			*input_val= *input_val ^ (1 << i);
			*input_val= *input_val ^ (1 << j);

		}

	}

}

int main()
{

	int *input_val,bit_no;

	input_val = malloc(sizeof(int));

	printf("Enter input: ");
	scanf("%d",input_val);


	reverse_bits(input_val);


	print_binary(input_val);









	free(input_val);

}



