#include <stdio.h>

/**
 * main-the entry point of the program
 * Return: 0 when there is no error, non zero when there is error
 **/
int main(void)
{
	char i;
	char j;
	for(i ='a'; i <='Z'; i++)
	{
		putchar(i);
}
       for (j ='A'; j <='Z'; j++)
       {
	       putchar(j);
       }
       putchar('\n');
       return (0);
 }
