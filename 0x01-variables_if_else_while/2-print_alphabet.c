#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for  (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
