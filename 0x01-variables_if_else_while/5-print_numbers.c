#include <stdio.h>

/**
 * main-entry point of the program.
 * Return:Always zero, non-zero value if there is an error.
 */
int main(void)
{
	char i;

	for (i = 'o'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
