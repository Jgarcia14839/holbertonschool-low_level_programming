#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using backslashes
 * @n: The number of backslashes to print
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int line;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
