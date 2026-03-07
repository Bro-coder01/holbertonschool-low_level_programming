#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}
