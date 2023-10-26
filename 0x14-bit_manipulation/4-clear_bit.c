#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to the number
 * @index: index of the bit to set
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1;
	i = i << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = i ^ *n;

	return (1);
}
