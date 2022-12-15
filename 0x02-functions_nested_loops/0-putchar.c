#include "main.h"
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char strng[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(strng[i]);
	}
	_putchar('\n');

	return (0);
}
