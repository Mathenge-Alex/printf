#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @num: The unsigned int to print in binary.
*
* Return: Number of characters printed.
*/
int print_binary(unsigned int num)
{
	char binary[32];

	int i = 0, j, count = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num > 0)
	{
		binary[i++] = (num % 2) + '0';
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--, count++)
	{
		write(1, &binary[j], 1);
	}

	return (count);
}
