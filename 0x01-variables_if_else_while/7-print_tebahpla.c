#include <stdio.h>

/**
 *
 * main-entry point of the program.
 * Return:Always a zero, otherwise a non-zero value if there is an error.
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
