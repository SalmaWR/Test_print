#include "header.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 **/

int print_string(va_list args)
{

    char *str = va_arg(args, char *);
    int size = _strlen(str);

    return (write(1, str, size));
}

/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/

int print_char(va_list args)
{
    char c = va_arg(args, int);
    return (write(STDOUT_FILENO, &c, 1));
}
