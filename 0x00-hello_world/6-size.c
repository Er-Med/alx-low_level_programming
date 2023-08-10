#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	printf("size of a char: %lu bytes(s)\n", sizeof(char));
	printf("size of a int: %ld bytes(s)\n", sizeof(int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);

}