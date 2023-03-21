#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char chr;
	int i = 0;

	while (i <= 9)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
		i++;
	}
}
