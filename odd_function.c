#include <stdio.h>

int odd_function(int,int);

int main(void)
{
	int result = 0;

	result = odd_function(100,200);
	printf("result %d\n", result);

	return (0);
}

int odd_function(int a,int b)
{
	return (a+b);
}
