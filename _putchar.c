#include <main.h>

/**
 * _putchar - writes a char
 * @c: char to print
 * Return: 1 on success
 * -1 on error
 */

int _putcha(char c)
{
	return (write(1, &c, 1));
}
