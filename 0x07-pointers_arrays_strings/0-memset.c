#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value
 * @s: Pointer to the starting address of memory to be filled
 * @b: The byte value to be set
 * @n: Number of bytes to fill
 *
 * Description: This function fills the first @n bytes of the
 *		memory area pointed to by @s with the constant byte @b.
 *Return: A pointer to the memory area @s
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

