#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alpabets execept
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while
		(a <= 'z') {
			if ((a != 'q' || a != 'e') && a <= 'z')
				putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
