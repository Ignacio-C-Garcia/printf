#include "main.h"
/**
*print_unint_recursion - prints the number given as a parameter
*@input: a number
*Return: number of digits printed
*/
int print_unint_recursion(unsigned int input)
{
	int counter = 0;
	char print_char;

	if (input / 10)
	{
		counter += print_unint_recursion(input / 10);
	}
	print_char = input % 10 + '0';
	write(1, &print_char, 1);
	counter++;
	return (counter);
}
/**
* fun_unint - print a digit
* @ap: list of arguments
* Return: larg of the digit
*/
int fun_unint(va_list ap)
{
	unsigned int number = va_arg(ap, unsigned int);

	return (print_unint_recursion(number));
}
