#include "main.h"

/**
 * factorial - returns the factorials of a given number
 * @n: input value
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
