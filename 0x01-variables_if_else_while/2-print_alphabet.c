#include <stdio.h>
/*
 * This program prints lowercase alphabets
 */
int main(void) {
	char lowercase = 'a';
	for (int i = 0; i < 26; i++)
	{
		putchar(lowercase + i);
	}
	putchar('\n');
	return (0);
}