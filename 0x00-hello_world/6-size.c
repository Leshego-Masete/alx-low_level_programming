#include <stdio.h>


/**
 * main-Serves as the entry point of the program
 *
 * Return:Always zero, otherwise a non-zero value if there is an error.
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
