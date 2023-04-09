#include "main.h"
#include <stdio.h>
/**
 * main - prints the program's own name
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

