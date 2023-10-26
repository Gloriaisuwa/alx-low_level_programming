#include  "main.h"
/**
 * get_endianness - checks the system Byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&n)[0]);
			return (little_or_big);
}
