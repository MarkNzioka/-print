#include"main.h"
/**
 * _printf - custom printf function
 * @format: format specifier to check for
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0, specifier_found;
	va_list args;
	size_t i = 0;

	conversion_handler handlers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent}
	};
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			specifier_found = 0;
			if (*format == '\0')
				break;
			if (*format == ' ')
				return (-1);
			for (i = 0; i < sizeof(handlers) / sizeof(handlers[0]); i++)
			{
				if (*format == handlers[i].specifier)
				{
					chars_printed += handlers[i].handler(args);
					specifier_found = 1;
					break;
				}
			}
			if (!specifier_found)
				chars_printed += print_unknown(args, *format);
		}
		else
		{
			putchar(*format);
			chars_printed++;
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}
