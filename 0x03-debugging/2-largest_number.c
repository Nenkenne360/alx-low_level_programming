#include "main.h"
/*Function prototype*/
int largest_number(int a, int b, int c);

/**
 * main - entry point
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(void)
{
	int a, b, c, largest = 0;
	/**
	*a = 972;
	*b = -98;
	*c = 0;
	**/

	largest = largest_number(972, -98, 0);
	printf("%d is the largest number\n", largest);
	return (0);
}
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
