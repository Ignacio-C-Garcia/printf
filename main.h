#ifndef MAIN_PRINTF_H
#define MAIN_PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void fun_str(va_list);
void fun_char(va_list);
void fun_int(va_list);
void fun_unint(va_list);
int _pow_recursion(int x, int y);

/**
*struct lista- relaciona un caracter con una funcion
*@letter: a character
*@p: a function that prints a specific type
*Description: longer description
*/
struct lista
{
char letter;
void (*p)(va_list);
};
#endif
