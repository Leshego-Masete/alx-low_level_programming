#include <stdio.h>


/**
 *
 * main-entry point of the program.
 * Return:Always zero, non-zero on error.
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
	break;
		}
	else
	{
		putchar(',');
	}
	}
	putchar('\n');
	return (0);
}
