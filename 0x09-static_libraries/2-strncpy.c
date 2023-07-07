#include "main.h"

/**
 * _strncpy - copies a string
 * @dest:destination
 * @src:source
 * @n:num to append
 * Return:char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		if (src[j])
		{
			dest[j] = src[j];
		} else
		{
			break;
		}
		j++;
		n--;
	}
	while (n > 0)
	{
		dest[j] = '\0';
		j++;
		n--;
	}
	return (&dest[0]);
}
