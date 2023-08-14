#include <stdio.h>

/**
 * main - entry
 * Description: prints all the numbers of base 16 in lowercase
 * following by a new line
 * Return: 0 (success)
*/

int main(void)
{
	char hex_digits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
	putchar(hex_digits[i]);
	}
	putchar('\n');

	return (0);
}
