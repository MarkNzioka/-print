#include"main.h"
/**
 * print_hex - handle the x specifier
 * @args: va_list of arguments
 * @uppercase: determine if uppercase
 * Return: number of digits
 */
int print_hex(va_list args, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, remainder, index = 0, count = 0;
	char buffer[12];
	const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (num == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			remainder = num % 16;
			buffer[index++] = digits[remainder];
			num /= 16;
		}
	}
	for (i = index - 1; i >= 0; i--)
	{
		putchar(buffer[i]);
		count++;
	}
	return (count);
}
/**
 * print_hex_lower - print %x
 * @args: va_list of arguments
 * Return: lower hex
 */
int print_hex_lower(va_list args)
{
	return (print_hex(args, 0));
}
/**
 * print_hex_upper - print %X
 * @args: va_list of arguments
 * Return: upper hex
 */
int print_hex_upper(va_list args)
{
	return (print_hex(args, 1));
}
