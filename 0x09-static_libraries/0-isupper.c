#include "main.h"
/**
 * _isupper - checks for uppeercase character
 * @c:charcater to check for uppercase
 * Return:1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
