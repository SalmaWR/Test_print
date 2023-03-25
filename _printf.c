#include"header.h"
/**
* _printf - Produces output according to a format
* @format: Is a character string. The format string
* is composed of zero or more directives
*
*
* Return: The number of characters printed (excluding
* the null byte used to end output to strings)
**/

int _printf(const char *format, ...)

{

va_list args;

int string_size = _strlen(format);

if (format == NULL )
{
return (-1)
}

va_start (args,format);

for (int i = 0; i < string_size; i++)
{

string_size = string_printer(format,args);

va_end(args);
return (string_size);
}
