#include "main.h"

/**
* print_char - Prints a character.
* @args: A list of arguments where the character is retrieved.
* Return: Returns the number of characters printed.
*/
int print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

/**
* print_string - Prints a string.
* @args: A list of arguments where the string is retrieved.
* Return: Returns number of characters printed.
*/
int print_string(va_list args)
{
	char *s;

	int i;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		write(1, &s[i], 1);

	return (i);
}

/**
* print_percent - Prints a percent sign.
* Return: Returns the number of characters printed.
*/
int print_percent(void)
{
	char percent = '%';

	write(1, &percent, 1);
	return (1);
}

/**
* _printf - A custom printf function that outputs format string to stdout.
* @format: The format string that contains specifiers and characters.
* Return: Returns number of characters printed.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, write_count, i;

	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++; /* Skipping the '%' character */
			switch (format[i])
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_string(args);
				break;
			case '%':
				count += print_percent();
				break;
			default:
				write_count = write(1, &format[i - 1], 1);
				if (write_count < 0)
					return (-1);
				count += write_count;

				write_count = write(1, &format[i], 1);
				if (write_count < 0)
					return (-1);
				count += write_count;
				break;
			}
		}
		else
		{
			write_count = write(1, &format[i], 1);
			if (write_count < 0)
				return (-1);
			count += write_count;
		}
	}

	va_end(args);
	return (count);
}
