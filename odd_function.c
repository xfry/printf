#include <stdio.h>

int odd_function(int,int);

int main(void)
{
	int result = 0;

	result = odd_function(10,21);
	printf("result %d\n", result);

	return (0);
}

int odd_function(int a,int b)
{
	if(a % 2 == 0)
	{
		printf("number is not ood");
		return 0;
	} else
	{
		return (a+b);
	}
}
