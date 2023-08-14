#include <stdio.h>
/**
 * main - entry
 * Description:  prints all possible
 * combinations of single-digit numbers.
 * Return: 0 (success)
*/

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	putchar(digit + '0');
	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
