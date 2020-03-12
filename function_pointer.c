#include<stdio.h>



void test_func2( void (*func_ptrrr)(int ,int))
{

	func_ptrrr(4,5);


}

void test_func(int val1,int val2)
{
	printf("in Test function %d %d\n",val1 ,val2);
}


void main()
{

	void (*fn_ptr)(int , int);	

	printf("In Main\n");
 
	fn_ptr=test_func;

	fn_ptr(1,2);

        test_func2(test_func);

}
