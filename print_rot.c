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
	char p1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	char p2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm ";

	if (c == NULL)
	{
		return (0);
	}

	{
		for (k = 0 ; c[k] != '\0' ; k++)
		{
			int z;

			for (z = 0 ; p1[z] != '\0' ; z++)
			{
				if (c[k] == p1[z])
				{
					count += _putchar(p2[z]);
						break;
				}
			}

			if (p1[z] == '\0')

			{
				count += _putchar(c[k]);
	}
}
return (count);
}
}
