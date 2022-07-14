include "main.h"

/**
 * string_touper - Changes all lowercase letters
 * of a string to uppercase
 * @str: The string to be changed
 * Return: A pointer to be changed string.
 */

char *string_touper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
