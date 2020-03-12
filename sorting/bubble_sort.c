#include<stdio.h>
#include<stdlib.h>

#define ARRAY_SIZE 5


void print_array(unsigned char *arr, int size)
{


for(int i=0; i<size ; i++)
{

	printf("%d ", arr[i]);

}

printf("\n");
}

void swap(char *val1, char *val2)
{

char tmp;

tmp = *val1;
*val1 = *val2;
*val2 =tmp;

}



void bubble_sort(unsigned char *arr , int size)
{
for(int i=0; i<size ; i++)
{

for(int j=0; j<size-1-i; j++)
{

if(arr[j]>arr[j+1])
{

swap(&arr[j],&arr[j+1]);

}


}


}





}



int main()
{
unsigned char *arr;

arr=malloc(sizeof(char) * ARRAY_SIZE);

printf("Enter the Inputs\n");

for(int i=0; i<ARRAY_SIZE ; i++)
{
	scanf("%d", (int *)  &arr[i]);
}


print_array(arr,ARRAY_SIZE);

bubble_sort(arr,ARRAY_SIZE);


print_array(arr,ARRAY_SIZE);

free(arr);
}

