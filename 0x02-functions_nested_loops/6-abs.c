#include "main.h"
/**
 * _abs - prints absolute value of argument
 *
 * @n: number being tested
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
