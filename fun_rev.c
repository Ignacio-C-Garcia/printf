#include "main.h"
/**
 * fun_rev - prints a string, in reverse, followed by a new line.
 * @ap: a string;
 * Return: count
 */
int fun_rev(va_list ap)
{
	char *str;
	int i;
	int count = 0;

	str = va_arg(ap, char *);
	if (str == 0)
		return (-1);

	for (i = 0; str[i] != 0; i++)
	{
		count++;
	}

	i = count;

	for (i--; i >= 0; i--)
	{
		write(1, str + i, 1);
	}
	return (count);
}
