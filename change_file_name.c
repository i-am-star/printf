#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_str - prints a string
*
* @val: argument
*
* Return: length of string
*/
int print_str(va_list val)
{
	char *str;

	int i, len;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";

		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);

		return (len);
	}

	else
	{
		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(s[i]);
			return (len);
	}

		return (len);
}
