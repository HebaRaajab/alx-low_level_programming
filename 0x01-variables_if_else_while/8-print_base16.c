/*
 * Filename: 8-print_base16.c
 * Writer: Heba Ragab
 */
#include <stdio.h>
/**
 * main - entry point
 * Description: prints all the numbers of base
 *		16 in lowercase, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar('0' + num);
		else
			putchar('a' + num - 10);
	}
	putchar('\n');
}
