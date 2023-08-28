/**
 * _memcpy - Copies memory area
 * @dest: Pointer copied memory
 * @src: Pointer to the actual memory
 * @n: Number of bytes to copy
 *
 * Description: This function copies @n bytes from the memory area pointed
 *		to by
 *		@src to the memory area pointed to by @dest.
 *
 * Return: A pointer to the destination memory @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
