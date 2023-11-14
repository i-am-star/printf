#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>

/**
* print_c - prints a character
*
* @val: argument
*
* Return: 1
*/

int print_c(va_list val)
{
	char str;

	str = va_arg(val, int);

	_putchar(str);

	return (1);
}
