/*
 * Filename:1-last_digit.c
 * Writer:Heba Ragab
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print last digit of number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int reminder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	reminder = n % 10;

	if (reminder > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, reminder);
	}
	else if (reminder == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, reminder);
	}
	else if (reminder < 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, reminder);
	}
	return (0);
}

