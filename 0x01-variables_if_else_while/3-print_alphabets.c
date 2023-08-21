/*
 * Filename:3-print_alphabet.c
 * Writer: Heba Ragab
 */
#include <stdio.h>
/**
 * main - entry point
 * Description:	Print the alphabet in uppercase and lowercase
 *		using loops and putchar.
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch)
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
