#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;

	for (dig = 'z'; dig >= 'a'; dig--)
	{
		putchar(dig);
	}
	putchar('\n');

	return (0);
}
