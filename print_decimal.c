#include"main.h"
/**
 * print_decimal - handle the d specifier
 * @args: va_list of arguments
 * Return: number of characters
 */
int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	int i, count = 0,index = 0;
	char buffer[12];

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num == 0)
		buffer[index++] = '0';
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
