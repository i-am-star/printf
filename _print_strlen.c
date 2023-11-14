#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>

/**
* _strlen - finds the length of a string
*
* @str: argument
*
* Return: length
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
* _strlenc - finds length of a string but for characters of type constant
* @s: string
* Return: length
*/

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
