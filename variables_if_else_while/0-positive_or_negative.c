#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point working with variable if, else
 * Return: Always 0
 * Using a source code
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);/*%d= integer; ,n outside the ) = the int n*/
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
