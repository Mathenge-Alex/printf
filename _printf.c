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


