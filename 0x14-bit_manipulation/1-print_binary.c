#include "main.h"

/**
 * print_b - print the binary rep of a number recursively
 * @n: the decimal input
 * Return: void
 */
void print_b(unsigned long int n)
{
	if (n == 0)
		return;
	print_b(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints out binary
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_b(n);
	}
}
