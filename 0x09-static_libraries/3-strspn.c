#include "main.h"

/**
 * _strspn - locates a char
 * @s:pointer
 * @accept:char
 * Return: number of bytes that matches
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned  int i, j, n;

	j = 0;
	while (s[j])
	{
		n = 1;
		i = 0;
		while (accept[i])
		{
			if (s[j] == accept[i])
			{
				n = 0;
				break;
			}
			i++;
		}
		if (n == 1)
		{
			return (j);
		}
		j++;
	}
	return (0);
}
