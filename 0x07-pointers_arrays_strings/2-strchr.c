#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: character to be located
 * @s: the string to be searched
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (;s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
