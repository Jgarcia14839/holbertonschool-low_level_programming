#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using #
 * @size: The size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int position;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (position = 1; position <= size; position++)
			{
				if (position <= size - row)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
}
