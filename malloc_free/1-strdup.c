#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to be duplicated.
 *
 * Return: pointer to the duplicated string, or NULL if error.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	p = malloc(sizeof(char) * (i + 1));


	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}

	return (p);
}
