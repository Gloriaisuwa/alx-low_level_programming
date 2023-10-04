#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argumnt vector
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
