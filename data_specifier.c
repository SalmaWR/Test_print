#include"header.h"

/**
* _printer - Format cotroller 
* @format: String format
* @args  : list of arguments
*
* Return : Total size of arguments with the total size of the base string 
**/


int _printer(const char *format, va_list args)

{
int counter;
int i = 0;
int string_size = 0;


	for (i =0; format[i] !=  0; i++)
	{
		if (format[i] = '%')
		{
		i++;
		counter = percent_handler(format, args, &i);
		
			if (counter < 0)
			{
			return (-1);			
			}

		string_size += counter;
		return (string_size);
		}
		
		else
		
		{
			write(1, format[i], 1);
			string_size += 1;
		}

		
	}
		return (string_size);
}
