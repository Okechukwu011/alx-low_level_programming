#include "main.h"

/**
* main - Entry Command
* Description - Print lowercase alphabet
*
* Return: Nothing
*/
void print_alphabet(void);
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n')
}
