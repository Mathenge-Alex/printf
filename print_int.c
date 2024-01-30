#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_int - print int numbers
*
* @n: integer number being printed
*
* Return: length of the int
*/

int print_int(int n)
{
	int k = 0;
	int a = n;

	if (n)
	{
		if (n < 0)
		{
			k += _putchar('-');
			a = -a;
		}

		if ((a / 10) > 0)
		{
			k += print_int(a / 10);
			k += _putchar((a % 10) + '0');
		}
		else
		{
			k += _putchar(n + '0');
		}
	}

	return (k);
}
