/*
 * Filename: 5-print_numbers.c
 * Writer: Heba Ragab
 */
#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers from zero to ten
 *		followed by newline.
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
	return (0);

}
