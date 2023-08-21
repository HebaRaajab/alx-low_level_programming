/*
 * Filename:2-print_alphabet.c
 * Writer: Heba Ragab
 */
#include <stdio.h>
/**
 * main - entry point
 * Description: Use for loop to make an iteration over alphabet by
 *		putchar.
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}
