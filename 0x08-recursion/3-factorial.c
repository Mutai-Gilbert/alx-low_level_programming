#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: int type number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
