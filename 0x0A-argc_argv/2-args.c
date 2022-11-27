#include <stdio.h>
#include "stdlib.h"

/**
 * main-Entry point
 * @argc:count arguments
 * @argv:arguments vector
 *
 * Return:always 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf('%s\n', *argv++);
	exit(EXIT_SUCCESS);
}
	
