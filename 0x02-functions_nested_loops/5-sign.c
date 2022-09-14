#include "main.h"
/**
 * print_sign - prints sign of number
 *
 * @n: chaaracter to be printed
 *
 * Return: 1 for greater than, 0 for equal to and -1 for less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	} else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
		_putchar(0);
		return (0);
}
