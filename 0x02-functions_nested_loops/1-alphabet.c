#include "main.h"
/**
 * print_alphabet - prints a to z
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphs = 'a';

	while (alphs <= 'z')
	{
		_putchar(alphs);
		alphs++;
	}
	_putchar('\n');
}
