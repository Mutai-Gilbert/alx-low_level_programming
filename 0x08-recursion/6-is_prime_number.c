#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (n, 2);
}
/**
 * main- helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @d: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */
int main(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (n, d + 1);
}
