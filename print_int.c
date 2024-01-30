#include "main.h"

/**
* print_int - Prints integer.
* @num: The integer being printed
* Return: Number of characters printed.
*/
int print_int(int num)
{
	char num_str[12];

	int i = 0, j, count = 0;

	int is_negative = num < 0;

	unsigned int n = is_negative ? -num : num;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (n > 0)
	{
		num_str[i++] = (n % 10) + '0';
		n /= 10;
	}

	if (is_negative)
	{
		num_str[i++] = '-';
	}

	for (j = i - 1; j >= 0; j--, count++)
	{
		write(1, &num_str[j], 1);
	}

	return (count);
}

