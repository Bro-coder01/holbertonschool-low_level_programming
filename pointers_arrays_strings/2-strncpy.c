#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If n is greater than src length, pad the rest with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
