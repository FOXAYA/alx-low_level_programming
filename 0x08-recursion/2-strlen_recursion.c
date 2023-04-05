#include "main.h"
/**
 * _strlen_recursion - retuens lenght of as string
 * @s: string calv the lenght of
 *
 *Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
