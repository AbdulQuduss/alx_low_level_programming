#include <stdio.h>
/**
 * main- This program prints all the arguments passed to it
 * @argc: argument count
 * @argv: argument array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1, i <= argc, i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}