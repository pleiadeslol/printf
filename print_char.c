#include "main.h"

/**
 * print_char - prints a character
 *
 * @args: the char to print
 * @format: format struct
 * @count: pointer to count char printed
 *
 * Return: always 0
 */

void print_char(va_list args, format_t format, void *count)
{
	char c = va_args(args, int);

	UNUSED(format);
	_putchar(c, count);
}
