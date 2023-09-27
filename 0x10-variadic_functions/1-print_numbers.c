#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- This funtion prints n numbers passed to it
 * @separator: the separator
 * @n: number of numbers
 * Return: void always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}