#include<stdio.h>
#include<stdlib.h>

#define ALTERNATE  0xAAAAAAAA

void print_binary(int *rec_val)
{

	for(int i=31; i>=0;--i)
	{

		if(*rec_val & 1 << i)
			printf("1 ");
		else
			printf("0 ");

	}

	printf("\n");

}

void set_alternate(int *rec_val)
{

	*rec_val = ALTERNATE;

}

int main()
{

	int *input_val;

	input_val = malloc(sizeof(int));

	printf("Enter input: ");
	scanf("%d",input_val);

	printf("Input Entered:  %d\n",*input_val);


	print_binary(input_val);
	set_alternate(input_val);

	print_binary(input_val);
	free(input_val);
}
