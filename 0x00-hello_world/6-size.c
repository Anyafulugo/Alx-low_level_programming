#include <stdio.h>
/**
 * main - A program that prints the size of various types on a computer
 * Return 0 (SUCCESS)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	peintf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a flot: %lu byte(s)", sizeof(float));
	return (0);
}
