#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a new string which is a duplicate of a string
 * @str: the string you want to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int d = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (d < i)
	{
		s[d] = str[d];
		d++;
	}

	s[d] = '\0';
	return (s);
}
