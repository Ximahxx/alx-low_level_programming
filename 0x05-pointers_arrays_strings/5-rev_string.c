#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: paremeter tested
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i j;
	int length;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
