# include "main.h"

/**
* print_rot13 - codes a text in rot1
* @c: pointer to the rot
*
* Return: interger, strlen
*/
int print_rot13(char *c)
{
	int k;
	int count = 0;
	int z;
	char p1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	char p2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm ";

	if (c)

	{
		for (k = 0 ; *(c + k) != '\0' ; k++)
		{
			for (z = 0 ; p1[p] != '\0' ; z++)
			{
				if (*(c + k) == p1[z])
				{
					count += _putchar(p2[z]);
						break;
				}
			}
		}
	}
	return (count);
}
