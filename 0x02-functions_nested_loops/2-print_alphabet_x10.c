#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
