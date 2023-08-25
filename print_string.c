#include"main.h"
/**
 * print_string - handle the s specifier
 * @args: va_list of arguments
 * Return: length f string
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	while (str[len])
	{
		putchar(str[len]);
		len++;
	}
	return (len);
}
