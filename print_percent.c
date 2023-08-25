#include"main.h"
/**
 * print_percent - handle the % specifier
 * @args: va_list of arguments
 * Return: %
 */
int print_percent(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}
