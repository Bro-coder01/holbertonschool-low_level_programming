#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, the function prints only a new line.
 * It uses the # character to print the triangle.
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			/* Print spaces for right-alignment */
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(' ');
			}

			/* Print the hashes */
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
