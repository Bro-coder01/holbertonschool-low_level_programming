#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	/* Calculate total length */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine starting point */
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;

	/* Print from n to the end */
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
