#include "main.h"

/**
 * _isalpha - check whether a character is upper case
 * and returns 1
 * @c:  character
 *
 * Return: 0 Always
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
