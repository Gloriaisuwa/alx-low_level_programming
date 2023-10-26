#include "main.h"

/**
 * set_bit - set the bit of a number to be 1
 * @n: pointer to the bit to be manipulated
 * @index: index of the bit to be set
 * Return: 1 on success or -1 on failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
