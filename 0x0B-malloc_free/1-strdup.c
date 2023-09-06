#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *x;
	unsigned int i, l;

	i = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	x = malloc(sizeof(char) * (l + 1));

	if (x == NULL)
		return (NULL);

	while ((x[i] = str[i]) != '\0')
		i++;

	return (x);
}
