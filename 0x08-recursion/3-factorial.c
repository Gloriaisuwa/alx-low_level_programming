#include "main.h"

/**
 * int factorial - returns the factorial of a given number
 * @n: number to return factorial from
 * Return: the factorial of a n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return(n * factorial (n - 1));
}
