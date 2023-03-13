#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int prod = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
		prod = prod * atoi(argv[i]);
	printf("%i\n", prod);
	return (0);
}
