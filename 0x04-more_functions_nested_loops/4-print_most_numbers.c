#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 to 9
 * excluding 2 and 4.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		if (b != 50 && b != 52)
			_putchar(b);
	}
	_putchar('\n');
}
