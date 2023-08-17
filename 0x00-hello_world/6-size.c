/*
 * Filename: 6-size.c
 * Username: Heba Ragab
 */
#include <stdio.h>
/**
  * main - entry point
  *
  * Description: print size ofn data types using printf()
  * Return: 0
  */
int main(void)
{
	printf("Size of a char: %d byte \n", sizeof(char));
	printf("Size of an int: %d bytes \n", sizeof(int));
	printf("Size of a long int: %d bytes \n", sizeof(long int));
	printf("Size of a long long int: %d bytes \n", sizeof(long long int));
	printf("Size of a float: %d bytes", sizeof(float));
	return (0);
}
