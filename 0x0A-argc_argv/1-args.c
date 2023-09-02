#include "main.h"
#include "stdio.h"

/**
* main - execution
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	(void) argc;
	(void) argv;
	return (0);
}
