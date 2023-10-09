#include "main.h"
#include <stdlib.h>

/**
 * _realloc - relocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size in byte of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: ptr
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr =  malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
