#include <stdio.h>

/**
 * main-program entry point.
 * Return:zero if no error, non-zero value if there is an error.
 */

int main(void)
{
	char i;

	for( i== 'a'; i <= 'z'; i++)
	{
		if ( i == 'e' || i == 'q')
			continue;
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
