#include"main.h"
/**
 * print_unknown - handle unknown specifier
 * @args: va_list of arguments
 * @specifier: specifier to print
 * Return: the unknown
 */
int print_unknown(va_list args, char specifier)
{
	(void)args;
	putchar('%');
	putchar(specifier);
	return (2);
}
