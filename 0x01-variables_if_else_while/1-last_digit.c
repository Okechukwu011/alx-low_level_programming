#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10

	if (last > 5)
	{
		printf("Last digit is %d is %d and is greater than 5\n");
	}
	if (last == 0)
	{
		printf("Last digit is %d is %d and is 0\n");
	}
	if (last < 6)
	{
		printf("Last digit is %d is %d and is less than 6 and not 0");
	}
	return (0);
}
