/*
 * Filename :1-memcpy
 * Writer :HebaRagab
 */

#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: pointer to copied memory
 *@src: pointer to actual memory
 *@n: number of bytes
 *Description: copy memory
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}



