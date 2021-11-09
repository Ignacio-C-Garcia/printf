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
	int counter = 0;
	int i, aux;
	va_list ap;
	lista array[] = {
		{'s', fun_str},
		{'c', fun_char},
		{'d', fun_int},
		{'i', fun_int},
		{'u', fun_unint},
		{'\0', NULL}
	};

	va_start(ap, format);
	if (!format)
	{
		return (-1);
	}
	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				counter += write(1, "%", 1);
				continue;
			}
			for (aux = 0; array[aux].letter; aux++)
				if (format[i] == array[aux].letter)
					counter = counter + array[aux].p(ap);
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
