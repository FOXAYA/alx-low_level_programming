#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
    	char j;

    	for(j='a'; j <'z'; j++)
    {
          putchar(j);
    }
     for (i ='A'; i<'Z'; i++)
    {
         putchar(i);
    }
     return (0);
}
