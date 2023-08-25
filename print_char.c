#include"main.h"
/**
 * print_char - handle the c specifier
 * @args: va_list of arguments
 * Return: the character
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}
