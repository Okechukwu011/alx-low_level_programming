#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
* main - execution
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	(void) argc;
	(void) argv;
	return (0);
}
