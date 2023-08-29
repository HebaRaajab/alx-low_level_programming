#include <stdio.h>

/**
 * _isupper - check if character is uppercase or lowercase
 * @c: any character
 * Return: 1 if uppercase else return 0.
 */
int _isupper(int c)
{
	char c;

	if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' ||
		c == 'G' || c == 'H' || c == 'I' || c == 'J' || c == 'K' || c == 'L' ||
		c == 'M' || c == 'N' || c == 'O' || c == 'P' || c == 'Q' || c == 'R' ||
		c == 'S' || c == 'T' || c == 'U' || c == 'V' || c == 'W' || c == 'X')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

