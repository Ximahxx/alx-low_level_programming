#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry poin
 *
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
