#include "main.h"
/**
 * _printf - printf
 * @format: a string
 *Return: number of bytes printed
 *struct lista - List of functions
 *Description: Longer description
 */
int _printf(const char *format, ...)
{
	int counter = 0, i, aux;
	va_list ap;

	va_start(ap, format);
	if (!format)
		return (-1);
	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			if (format[i] == '%')
			{
				counter += write(1, format + i, 1);
					continue;
			}
			for (aux = 0; fstruct(aux).letter; aux++)
				if (format[i] == fstruct(aux).letter)
				{
					counter = counter + fstruct(aux).p(ap);
					break;
				}
			if (!fstruct(aux).letter)
			{	i--;
				counter += write(1, format + i, 1);
			}

		}
		else
		{
			write(1, format + i, 1);
			counter++;
		}
	}
	va_end(ap);
	return (counter);
}
