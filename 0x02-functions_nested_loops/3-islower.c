#include "main.h"

/**
 * _islower - checks for a lowercase character
 *
 * Return: Always 0
 */

int _islower(void)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
