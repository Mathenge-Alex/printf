#include <maim.h>

/**
 * _putchar - writes char c stdout
 *@c: the char to be printed
 *
 *Return: 1 on success
 *on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
