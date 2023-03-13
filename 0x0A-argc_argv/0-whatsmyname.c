#include <stdio.h>

/**
 * main - prints out its program name
 * @argc: argument count
 * @argv: pointer to arrray of strings
 * Return: name of program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
