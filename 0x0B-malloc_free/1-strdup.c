#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *str_dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	str_dup = malloc(sizeof(char) * (len + 1));

	if (str_dup == NULL)
		return (NULL);

	while ((str_dup[i] = str[i]) != '\0')
	{
			i++;
	}

			return (str_dup);
}
