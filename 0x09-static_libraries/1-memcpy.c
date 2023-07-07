#include "main.h"

/**
 * _memcpy - copy n bytes of memory
 * @dest:pointer
 * @src:char
 * @n: amount of bytes
 * Return: A pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
