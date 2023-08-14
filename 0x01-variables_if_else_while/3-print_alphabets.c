#include <stdio.h>
/**
 * main - entry
 * Description: prints the alphabet in lowercase, and then in uppercase
 * followed by a new line.
 * Return: 0 (success)
*/

int main(void)
{
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; lower_alphabet[i] != '\0'; i++)
	{
	putchar(lower_alphabet[i]);
	}
	for (i = 0; upper_alphabet[i] != '\0'; i++)
	{
	putchar(upper_alphabet[i]);
	}
	putchar('\n');
	return (0);
}
