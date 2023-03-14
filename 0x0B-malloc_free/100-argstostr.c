#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments of the program
 * @ac: argument pointer
 * @av: argument vector
 * Return: concatenated argument string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, k = 0;
	char *new, *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len = len + _strlen(av[i]);

	new = malloc((len + ac + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		p = av[i];
			for (j = 0; p[j]; j++)
			{
				new[k] = p[j];
				k++;
			}
			new[k] = '\n';
			k++;
	}
	new[k] = '\0';
	return (new);
}


#include "main.h"

/**
 * _strlen - gives length of a string
 * @s: string
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l])
		l++;
	return (l);
}
