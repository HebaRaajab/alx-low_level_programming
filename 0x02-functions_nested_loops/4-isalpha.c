#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: be checked
 * Return: 1 if letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

