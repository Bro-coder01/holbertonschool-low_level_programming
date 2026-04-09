#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, s, t, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = i + j;
	p = malloc(sizeof(char) * (s + 1));

	if (p == NULL)
		return (NULL);

	for (t = 0; t < i; t++)
	{
		p[t] = s1[t];
	}

	for (z = 0; z < j; z++, t++)
	{
		p[t] = s2[z];
	}

	p[t] = '\0';

	return (p);
}
