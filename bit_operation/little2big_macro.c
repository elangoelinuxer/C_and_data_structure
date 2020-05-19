#include<stdio.h>
#include<stdlib.h>


#define L2B_Endian(val)   ((val << 24)&0xff000000) | ((val >> 24)&0x000000ff) | ((val << 8)&0x00ff0000) | ((val >> 8)&0x0000ff00)
void print_binary(int rec_val)
{
int j=0;
for(int i=31; i>=0;--i)
{


  if(rec_val & 1 << i)
   {
	printf("1 ");
   }
  else
   {
	printf("0 ");
   }



if(++j==8)
{
printf("  ");
j=0;

}


}

printf("\n");

}

int main()
{

int *input_val;

input_val = malloc(sizeof(int));

printf("Enter input: ");
scanf("%x",input_val);

printf("Input Entered: 0x %x\n",*input_val);

print_binary(*input_val);

print_binary(L2B_Endian(*input_val));

printf("Byte order reversed\n");

free(input_val);

}



