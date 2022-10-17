#include <sttdio.h>

/**
 * main - prints lowercase alpha except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	la = 'a';
	while
		(la <= 'z') {
			if ((la != 'q' && la != 'e') && la <= 'z')
				putchar(la);
			la++;
		}
	putchar('\n');
	return (0);
}
