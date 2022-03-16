#include <stdio.h>

/**
 * main - calculate and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int add3, add5, add
	int i;

	add3 = 0;
	add5 = 0;
	add = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			add3 = add3 + i;
		} else if ((i % 5) == 0)
		{
			add5 = add5 + i;
		}
	}
	add = add3 + add5;
	printf("%lu\n", add);
	return (0);

}
