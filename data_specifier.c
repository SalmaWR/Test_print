#include"header.h"

/**
* data_specidier - Format cotroller 
* @format: String format
* @args  : list of arguments
*
* Return : Total size of arguments with the total size of the base string 
**/


int string_printer(const char *format, va_list args)

{
int counter;
int i = 0;
int string_size = 0;


int (*Format_specifier)(const char *format,va_list args, &i) = Percent_handler;

	for (i =0; format[i] !=  0; i++)
	{
		if (format[i] = '%')
		
		{
		i++;
		counter = (Format_specifier)(format, args, &i);
		
			if (counter < 0)
			return (-1);			

		size += counter;
		return (size);
		}
		
		else
		
		{
			write(1, format[i], 1);
			string_size += 1;
		}

		
	}
		return (string_size);
}




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
write(1, format[*i], 1);


/* intializ pointer that point to print functions*/
int (*definer)(va_list args);

if ( format[*i] = 's')
{
definer = &print_string;
  
} 

else if (format[*i] = 'c') 
{
definer = &print_char;
} 

else if (format[*i] = 'd') 

{ 
definer = &print_string; 
}

definer(args);


