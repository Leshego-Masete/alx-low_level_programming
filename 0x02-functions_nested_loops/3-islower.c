#include "main.h"


/**
 * _islower-check if character is lowercase.
 * @c:character to check if it islowercase.
 * Return:Zero if lowercase, otherwise one if non-zero value.
 */




int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
