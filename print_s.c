#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_str - prints a good string
* @c: pointer to string printed
*
* Return: length of string to be printed
*/

int print_str(char *c)
{
	int k;

	if (c == NULL)
		c = "(nil)";

	for (k = 0; *(c + k); k++)
	{
		_putchar(*(c + k));
	}
	return (k);
}
