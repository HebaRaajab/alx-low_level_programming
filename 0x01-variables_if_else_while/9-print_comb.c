/*
 * Filename:9-print_comb.c
 * Writer:Heba Ragab
 */

#include <stdio.h>
/**
 * main - Entry point
 * Description: print single numbers separates by(,).
 * Return: Always 0.
 */

int main(void)
{
	int x = 0;
	
	while (x <= 9)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(' ');
			putchar(',');
		}
		x++;
	}
	putchar('\n');
	return (0);
}

