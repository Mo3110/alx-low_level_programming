#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory are pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory are pointed to by @s
 * @s: with the constant byte @b
 * @b: memory are pointer
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
