#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0 Alaways
 */

void print_alphabet_x10(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
