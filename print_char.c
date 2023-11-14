#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_char - prints a character
*
* @val: argument
*
* Return: 1
*/
int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);

	return (1);
}
