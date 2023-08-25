#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

typedef struct
{
	char specifier;
	int (*handler)(va_list);
} conversion_handler;
extern conversion_handler handlers[];

int _printf(const char *format, ...);
int print_char(va_list args);
int print_percent(va_list args);
int print_unknown(va_list args, char specifier);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_string(va_list args);

#endif
