#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);

int main()
{
	printf("the sum of 15, 30 and 56 is %d\n", sum(3, 15, 30, 56));
	return 0;
}

int sum(int count_args, ...)
{
	int val = 0;
	va_list args;
	
	// initial va_list object
	va_start(args, count_args);

	int i;
	for(i = 0; i < count_args; i++)
	{
		// type va_args(va_list ap, type);
		// return the next type value of argument list
		val += va_arg(args, int);
	}

	// 
	va_end(args);

	return val;
}