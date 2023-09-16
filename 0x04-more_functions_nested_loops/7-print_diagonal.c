#include "main.h"

/**
 * print_diagonal - print n long diagonal
 * @n: number of times the character \ to be printed
 * Each diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int ch, k;

	if (n > 0)
	{
		for (ch = 0; ch < n; ch++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == ch)
					_putchar('\\');
				else if (k < ch)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
