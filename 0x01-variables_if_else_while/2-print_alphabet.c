#include <stdio.h>
/**
 * main-the entry point of the program.
 * Return: 0 if zero error, non zero if theres errors.
 **/
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
