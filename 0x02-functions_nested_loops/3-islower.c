#include "main.h"

/**
 * _islower - print 1 if a charcater is lower case and
 * 0 otherwise
 * @c: charcater
 * Return: 0 Always
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
