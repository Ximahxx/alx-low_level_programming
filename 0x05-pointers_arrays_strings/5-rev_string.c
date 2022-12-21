#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: paremeter tested
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
