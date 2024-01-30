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

