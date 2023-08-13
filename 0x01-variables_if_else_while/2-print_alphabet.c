#include <stdio.h>

/**
 * main - entery point
 * Description: print alphabet by using putchart function.
 * Return: 0 (success)
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; alphabet[i] != '\0'; i++)
	{
	putchar(alphabet[i]);
	}
	return (0);
}
