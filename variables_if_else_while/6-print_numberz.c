#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar('0' + dig);
	}
	putchar('\n');

	return (0);
}
