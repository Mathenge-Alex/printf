#include "main.h"

/**
* print_int - Prints integer.
* @num: The integer being printed
* Return: Number of being characters printed.
*/
int_print_int(va_list argus)
{
	int n = va_arg(argus, int);
	int num, last = n % 10, digit, exp =1;
	int k = 1;

	n = n /10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		k++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num -(digit * exp);
			exp = exp / 10;
			k++;
		}
	}
	_putchar(last + '0');
	return (k);
}
