#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
