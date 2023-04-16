#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments
 * @argv: argument vector
 * @argc: number of the arguments
 *
Return: Always 0
*/
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; ++y)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
