/*
 * Filename: 101-quote.c
 * Username: Heba Ragab
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description: Using write function to print a statement.
 *              The statement can be print directly using write(1, "text", n)
 * Return: Always (1)
 */
int main(void)
{

	char myWord[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int sL = strlen(myWord);

	write(1, myWord, sL);
	write(1, "\n", 1);
	return (1);
}

