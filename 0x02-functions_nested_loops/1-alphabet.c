#include "main.h"

/**
 * print_alphabet - Print all alphabet in lower case
 * using _putchar twice
 *
 * Return: 0 Always
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

