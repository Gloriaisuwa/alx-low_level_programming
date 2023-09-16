#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 * If size =<0, print only a new line
 * Use # to print the square
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int ch, k;

		for (ch = 0; ch < size; ch++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
