#include "main.h"
/**
 * get_width - Calculate print width
 * @format: Formatted string
 * @i: List of arguments to print
 * @list: list of arguments.
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int widt = 0;
	int curr_i;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			widt *= 10;
			widt += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			widt = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (widt);
}
