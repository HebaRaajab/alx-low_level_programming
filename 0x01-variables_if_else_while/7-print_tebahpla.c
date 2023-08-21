/*
 * Filename:7-print_tebahpla.c
 * writer:Heba Ragab
 */
#include <stdio.h>
/**
 * main - entry point
 * Description:Print alphabet in reverse
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
