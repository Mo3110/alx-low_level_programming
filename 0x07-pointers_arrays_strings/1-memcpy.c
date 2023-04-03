#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory are @src
 * to memory are @dest
 * @n: function copies
 * @src: bytes from memoru are
 * @dest: to memory are
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
