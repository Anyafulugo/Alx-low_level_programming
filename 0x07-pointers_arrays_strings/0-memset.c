#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory to be filled
 * @n: number of bytes to be changed
 * @b: the desired value
 *
 * Return: changed array with new value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
