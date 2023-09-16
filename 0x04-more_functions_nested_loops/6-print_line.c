#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Theline should end with a \n
 * if n is 0 or less, print \n
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int ch;

	if (n > 0)
	{
		for (ch = 1; ch <= n; ch++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
