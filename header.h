#ifndef HEADER_H
#define HEADER_H

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

int _printf(const char *format, ...);

int _strlen(const char *format);

int string_printer(const char *format, va_list args);

int Specifier_handler(const char *format, va_list args, int *i);

#endif
