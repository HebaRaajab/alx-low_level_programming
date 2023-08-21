/*
 * Filename:0-positive_or_negative.c
 * writer: Heba Ragab
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description: its a program which check number to
 *		declere it type is it zero or positive
 *		or negative.
 *Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*printf("Enter a number to check:");*/
	scanf("%i", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);

}
