#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

typedef struct func
{
	char *t;
	int (*f)(valist);
} func_t;
int print_char(va_list);
int print_str(va_list);
int print_int(va_list);
int print_cent(va_list);
int print_dec(va_list);

#endif
