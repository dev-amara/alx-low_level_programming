#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j = 'z';

	while (j >= 'a')
	{
		putchar(j);
		j--;
	}
	putchar('\n');
	return (0);
}
