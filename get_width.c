#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int iwid;
	int width = 0;

	for (iwid = *i + 1; format[iwid] != '\0'; iwid++)
	{
		if (is_digit(format[iwid]))
		{
			width *= 10;
			width += format[iwid] - '0';
		}
		else if (format[iwid] == '*')
		{
			iwid++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = iwid - 1;

	return (width);
}
