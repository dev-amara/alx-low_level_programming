#include "main.h"

/**
 * jack_bauer - print every minutes of the day
 *
 *Return: 0 Always
 */

void jack_bauer(void)
{
	int h, i;

	h = 0;

	while (h < 24)
	{
		i = 0;
		while (i < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
			i++;
		}
		h++;
	}
}


