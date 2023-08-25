#include"main.h"
/**
 * print_unsigned - handle the u specifier
 * @args: va_list of arguments
 * Return: number of digits
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, count = 0, index = 0;
	char buffer[12];

	if (num == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			buffer[index++] = '0' + (num % 10);
			num /= 10;
		}
	}
	for (i = index - 1; i >= 0; i--)
	{
		putchar(buffer[i]);
		count++;
	}
	return (count);
}
