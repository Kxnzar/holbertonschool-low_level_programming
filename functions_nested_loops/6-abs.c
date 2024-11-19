#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: variable with the absolute value
 *
 * Return: -n is the pos version of the number is neg, n if already pos or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
