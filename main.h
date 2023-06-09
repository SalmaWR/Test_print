#ifndef HEADER_H
#define HEADER_H

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
 
/* printf.c */
int _printf(const char *format, ...);

/* utils.c */
int _strlen(const char *format);

int _printer(const char *format, va_list args);

int _percent_handler(const char *format, va_list args, int i);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);

#endif
