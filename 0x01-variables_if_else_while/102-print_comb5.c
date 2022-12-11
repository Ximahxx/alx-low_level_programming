#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
		{
			for (i = 0; i <= k; i++)
			{
				for (j = 0; j < l; j++)
				{
					if (l != j && k != i)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
							putchar(',');
							putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
