#include "main.h"

/**
 * print_last_digit - pritn last digit of number
 * @n: number
 *
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * (n % 10);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar (ld + '0');
		return (ld);
	}
}

