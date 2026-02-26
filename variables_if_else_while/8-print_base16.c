#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;
	int alf;

	/* Loop for numbers 0-9 */
	for (dig = 0; dig < 10; dig++)
	{
		putchar('0' + dig);
	}

	/* Loop for letters a-f */
	for (alf = 'a'; alf <= 'f'; alf++)
	{
		putchar(alf);
	}

	putchar('\n');

	return (0);
}
