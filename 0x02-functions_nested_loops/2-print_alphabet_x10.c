#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
