#include "main.h"

/**
 * _strchr - locates a char
 * @s:pointer
 * @c:char
 * Return: A pointer
 */

char *_strchr(char *s, char c)
{
	unsigned  int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
