#include <unistd.h>
/**
 * _putchar - writes a char
 * @c: char to print
 * Return: 1 on success
 * -1 on error and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
