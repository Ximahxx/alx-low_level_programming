#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	short x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}
