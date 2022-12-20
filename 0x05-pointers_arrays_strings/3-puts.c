#include "main.h"
#include "_putchar.c"
/**
 * _puts - prints a string followed by a new line..
 * @str: the string to print.
 *
 * Return: void
 */



void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
