#include <stdio.h>
#include "main.h"

/**
 *fun_int - Prints int
 *@ap: variables list
 *Return: number of digits printed
 */

int fun_int(va_list ap)
{

	int number = va_arg(ap, int);
	int aux = 10;
	int counter = 0;
	int var;
	char result;
	int guarangada = 1;

	if (number < 0)
	{
		guarangada += write(1, "-", 1);
		number *= (-1);
	}
	while ((number % aux) != number)
	{
		counter++;
		aux = aux * 10;
	}

	var = _pow_recursion(10, counter);

	for (aux = 0; aux <= counter; aux++)
	{
		result = '0' + (number / var) % 10;
		write(1, &result, 1);
		if (var == 1)
			var = var / 10;
	}
	return (counter + guarangada);
}
