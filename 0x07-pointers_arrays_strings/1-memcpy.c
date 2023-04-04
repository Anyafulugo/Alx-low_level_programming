#include "main.h"

/**
 *_memcpy - function that copies memory area
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
