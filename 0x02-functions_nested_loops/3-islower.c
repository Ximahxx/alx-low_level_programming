#include "main.h"
/**
 * _islower - checks if argument is lowercase
 *
 * Return: 1 if lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);
}
