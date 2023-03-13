#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
	int i, j, length;
	int sum = 0;
	char *s;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		length = strlen(s);

		for (j = 0; j < length; j++)
		{
			if (isdigit(*(s + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
