#include "main.h"
/**
 * _isalpha - check for character
 *@c: parameter to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
