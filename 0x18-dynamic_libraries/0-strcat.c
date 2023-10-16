#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len_D, len_S;

	len_D = 0;
	len_S = 0;

	while (*(dest + len_D) != '\0')
		len_D++;

	while (*(src + len_S) != '\0' && len_D < 97)
	{
		*(dest + len_D) = *(src + len_S);
		len_D++;
		len_S++;
	}
	*(dest + len_D) = '\0';
	return (0);
}
