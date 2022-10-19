#include <stdio.h>

/**
 * main-entry point of the program.
 * Return:Always zero, otherwise non-zero value if there is an error.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
