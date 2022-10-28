#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 *		of a string to uppercase
 * @str: The string to be changed
 * Return: a pointer to the string changed
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 12;
		index++;
	}
	return (str);
}
