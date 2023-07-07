#include "main.h"

/**
 * _strpbrk - works like the strpbrk in c
 * @s:pointer
 * @accept:char
 * Return: number of bytes that matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned  int i, j, n;

	j = 0;
	while (s[j])
	{
		n = 0;
		i = 0;
		while (accept[i])
		{
			if (s[j] == accept[i])
			{
				n = 1;
				break;
			}
			i++;
		}
		if (n == 1)
		{
			return (&s[j]);
		}
		j++;
	}
	return (0);
}
