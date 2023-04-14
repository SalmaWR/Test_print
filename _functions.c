#include<stdio.h>
#include "main.h"

/**
 * print_string - Print string
 * @args: list.
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
 * @args: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/

int print_char(va_list args)
{
    char c = va_arg(args, int);
    return (write(STDOUT_FILENO, &c, 1));
}

/**
 * print_integer - Print a number in base 10
 * @args: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/

int print_integer(va_list args)
{
    int length = 0;
    char buffer[10];
    int num = va_arg(args, int);
    char negative_sign = '-';
    ;

    if (num < 0)
    {   
        write(1, &negative_sign, 1);
        num = -num;
        length++;
    
    }

    int divisor = 1;
    int digit = num / divisor;

    while (digit >= 10)
    {

        divisor *= 10;

    }

    if (divisor != 0)
    {

    buffer[length] = digit + '0';
    digit = num % divisor;
    divisor /= 10;
    length++;

    }

        write(STDOUT_FILENO, buffer, length); 

    return (length);
}

/*return (write(STDOUT_FILENO, buffer, length))
}

write(fd, buffer, nbytes)

void number_converter(int value, int upper_case)
{
    int upper_case;
    upper_case == 1; // ABCDEF
    upper_case != 1; // abcdef
    int i = 0;
    char str[10];
    while (i < 10)
    {
        str[i++] = value % 2 + '0';
        value = value / 2;
    }
    printf(strrev(str));
}*/

