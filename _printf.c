#include<stdarg.h>
#include"header.h"


int _printf(const char *format, ...)

{

va_list args;

int num_args = _strlen(format);

if (format == NULL )
{
return (-1)
}

va_start (args,format);

for (int i = 0; i < num_args; i++)
{
switch (format[i])
}


}
