#include "main.h"

/**
 * print_sign - Entry point
 *@n: the num to be checked for
 *
 * Return: 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	esle if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
