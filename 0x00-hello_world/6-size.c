#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %b bytes(s)\n", sizeof(char));
	printf("Size of an int: %b bytes(s)\n", sizeof(int));
	printf("Size of a long int: %b bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %b bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %b bytes(s)\n", sizeof(float));
	return (0);
}
