#include <stdio.h>

/**
 * _strlen - description: This function calculates the length
 * of a null-terminated string.
 *
 * @s: the input strins
 * Return: the calculated length of the string.
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}

	return (len);
}
