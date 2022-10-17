#include <stdio.h>

/**
 * main - print words in lower case and uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch;

	char d;

	ch = 'a';
	d = 'A';
	while
		(ch <= 'z') {
			putchar(ch);
			ch++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}

	putchar('\n');

	return (0);
}
