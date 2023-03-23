#include "monty.h"

/**
 * is_digit - a function that if a character is an integer
 * @num: the character
 * Return: TRUE or FALSE
 */
int is_digit(char *num)
{
	int num1;

	for (num1 = 0; num[num1] != '\0'; num1++)
		if (isdigit(num[num1] == FALSE))
			return (FALSE);

	return (TRUE);
}
