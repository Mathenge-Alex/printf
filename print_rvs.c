#include "main.h"

/**
* print_rvs - prints string in reverse mode
* @c: pointer to the reverse srring
* Return: counted printed char of the string
*/
int print_rvs(char *c)
{
	int n = 0;
	int j;

	if (!c)
		return (-1);
	while (*(c + n) != '\0')
	{
		n++;
	}
	for (j = n - 1; j >= 0; j--)
	{
		_putchar(*(c + j));
	}

	return (n);
}
