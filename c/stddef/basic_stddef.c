#include <stdio.h>
#include <stddef.h>

struct t_address 
{
	char name [50];
	char street [50];
	int phone;
	char city [10];
};

int main()
{
	printf("the offset of name in address is %d\n", 
		offsetof(struct t_address, name));

	printf("the offset of street in address is %d\n", 
		offsetof(struct t_address, street));

	//printf("the offset of phone in address is %d\n", 
	//	offsetof(struct t_address, city));

	return 0;
}