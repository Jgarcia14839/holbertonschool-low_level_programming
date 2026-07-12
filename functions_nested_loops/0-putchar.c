#include "main.h"

/**
 * main - Prints _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int index;

	for (index = 0; text[index] != '\0'; index++)
		_putchar(text[index]);

	_putchar('\n');

	return (0);
}
