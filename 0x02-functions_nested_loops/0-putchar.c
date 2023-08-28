#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * _putchar - prints "_putchar"
 * @word: char constant
 *
 * Description: Function that takes a character
 *		as parametar and print putchat
 * Return: Function to prints "_putchar"
 */

int _putchar(const char *word)
{
	return (write(1, word, strlen(word)));
}

/**
 * main - Enrey point
 *
 * Description: print _putchar using function using pputchar
 * Return: Always 0.
 */

int main(void)
{
	const char *word = "_putchar";

	_putchar(word);

	return (0);
}

