#ifndef MAIN_PRINTF_H
#define MAIN_PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
*struct lista - Relate char with function
*@letter: a character
*@p: a function that prints a specific type
*Description: longer description
*/
struct lista
{
char letter;
int (*p)(va_list);
};
typedef struct lista lista;

int fun_str(va_list);
int fun_char(va_list);
int fun_int(va_list);
int fun_unint(va_list);
int fun_rev(va_list);
int _printf(const char *, ...);
int _pow_recursion(int x, int y);
lista fstruct(int i);
#endif
