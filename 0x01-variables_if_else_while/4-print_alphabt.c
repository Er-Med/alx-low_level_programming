#include <stdio.h>
/**
 * main - entry
 * Description: print all the letters except q and e.
 * Return: 0 (success)
*/

int main(void)
{
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; lower_alphabet[i] != '\0'; i++)
	{
	if (lower_alphabet[i] == 'q' || lower_alphabet[i] == 'e')
	{
	i++;
	}
	putchar(lower_alphabet[i]);
	}
	putchar('\n');
	return (0);
}
