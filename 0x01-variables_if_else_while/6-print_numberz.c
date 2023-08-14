#include <stdio.h>
/**
 * main - entry
 * Description: prints all single digit numbers
 * f base 10 starting from 0, followed by a new
 * line by using the putchar function.
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
