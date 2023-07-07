#include "main.h"

/**
 * _strcmp - appeends to a string
 * @s1:destination
 * @s2:source
 * Return:the diffrence in integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, res;

	i = 0;
	res = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			res = s1[i] - s2[i];
			break;
		}
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}

		i++;
	}
	return (res);
}
