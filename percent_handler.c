#include"header.h"

/**
* percent_handler - Controller for percent format
* @format: String format
* @args  : List of arguments
* @i     : Iterator
* Return: Size of the numbers of elements printed
*/

int Percent_handler(const char *format, va_list args, int *i)
{

	if (format[*i] = '%')
	{
		write(1, format[*i], 1);
	}
/* intializ pointer that point to print functions*/
	int (*definer)(va_list);

	if ( format[*i] = 's')
		{
		definer = &print_string;
		}
	else if (format[*i] = 'c')
		{
		definer = &print_char;
		}
	else if (format[*i] = 'd'|| format[*i] = 'i')
		{
		definer = &print_integer;
		}
definer(args);
}
