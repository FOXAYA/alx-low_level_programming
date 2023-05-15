#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char alp_batic[26]="abcdefghijklmnopqrstuvwxyz";
	int i ;

	for (i=0;i<26;i++)
	{
		putchar(alp_batic[i]);
	}
	putchar('\n');
	
	return (0);
}
