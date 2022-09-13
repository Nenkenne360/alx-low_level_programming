#include "main.h"

/**
 * print alphabet x10: prints lowercase 10 times
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		{
			for (i = 0; i < 10; i++)
			{
				_putchar(i);
			}
		}
	}
		_putchar ('\n');
		return(0);
}
