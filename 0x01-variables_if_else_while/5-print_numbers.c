#include <stdio.h>
/**
 * main - entry
 * Description: prints all single digit numbers
 * f base 10 starting from 0, followed by a new line.
 * Return: 0 (success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	printf("%d", digit);
	}
	printf("\n");
	return (0);
}
