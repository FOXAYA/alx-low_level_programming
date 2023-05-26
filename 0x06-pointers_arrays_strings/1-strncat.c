#include "main.h"

/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_D, len_S;

	len_D = 0;
	len_S = 0;

	while (*(dest + len_D) != '\0')
		len_D++;

	while (*(src + len_S) != '\0' && len_D < 97 && len_S < n)
	{
		*(dest + len_D) = *(src + len_S);
		len_D++;
		len_S++;
	}
	*(dest + len_D) = '\0';
	return (dest);
}
