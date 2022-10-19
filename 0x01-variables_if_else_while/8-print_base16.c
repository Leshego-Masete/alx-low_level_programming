#include <stdio.h>


/**
 *
 * main-entry point of the program.
 * Return:Always zero, otherwise non-zero if there is error.
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
