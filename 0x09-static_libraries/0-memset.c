#include "main.h"

/**
 * _memset - fill n bytes of memory
 * @s:pointer
 * @b:char
 * @n: amount of bytes
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	n--;
	while (n > 0)
	{
		s[n] = b;
		n--;
	}
	s[n] = b;
	return (&s[0]);
}
