#include<stdio.h>

/**
*_strlen - Returns the legnth of a string.
*@str: The string to get the length of
*Return: the legnth of @str.
*/
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}