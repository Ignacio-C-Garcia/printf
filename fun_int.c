#include "main.h"
/**
*print_int_recursion - prints the number given as a parameter
*@number: a number
*Return: number of digits printed
*/
int print_int_recursion(int number)
{
	int counter = 0;
	char print_char;

	if (number < 0)
	{
		write(1, "-", 1);
		counter++;
		number = -number;
	}
	if (number / 10)
	{
		counter += print_int_recursion(number / 10);
	}
	print_char = number % 10 + '0';
	write(1, &print_char, 1);
	counter++;
	return (counter);
}
/**
* fun_int - print a digit
* @ap: list of arguments
* Return: larg of the digit
*/
int fun_int(va_list ap)
{
	int number = va_arg(ap, int);

	return (print_int_recursion(number));
}
