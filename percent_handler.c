#include "header.h"

/**
 * percent_handler - Controller for percent format
 * @format: String format
 * @args  : List of arguments
 * @i     : Iterator
 * Return: Size of the numbers of elements printed
 */

int _percent_handler(const char *format, va_list args, int i)
{
	int counter = 0;

	if (format[i] == '%')
	{
		counter = write(1, format + i, 1);
		return (counter);
	}
	/* intializ pointer that point to print functions*/
	switch (format[i])
	{
	case 's':
		counter = print_string(args);
		break;
	case 'c':
		counter = print_char(args);
		break;
	case 'd':
	case 'i':
		// counter = print_integer(args);
		break;
	default:
		// handle unvalid bateee5
		break;
	}
	return (counter);
}
