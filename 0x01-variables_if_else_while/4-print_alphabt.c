/*
 * Filename: 4-print_alphabt.c
 * Writer: Heba Ragab
 */
#include <stdio.h>
/**
 * main - entry point
 * Description: Print the alphabet in lowercase except e,q.
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}

	return (0);
}
