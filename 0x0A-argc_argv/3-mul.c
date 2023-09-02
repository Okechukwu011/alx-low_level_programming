#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
* main - execution
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int num1;
int num2;
int product;

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	(void) argc;
	(void) argv;
	return (0);
}
