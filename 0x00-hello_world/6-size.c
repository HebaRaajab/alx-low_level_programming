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
	printf("Size of a char: %c byte(s) \n", sizeof(char));
	printf("Size of an int: %d byte(s) \n", sizeof(int));
	printf("Size of a long int: %ld byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s) \n", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
