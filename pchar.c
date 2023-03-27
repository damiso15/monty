#include "monty.h"

/**
 * _pchar_ - a function that prints the char at the top of the stack,
 * followed by a new line
 * @stack: the input stack
 * @line_number: line number
 * Return: Nothig
 */
void _pchar_(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!stack || !*stack)
		error_handler(ERROR_STACK_EMPTY);

	if ((*stack)->n < 0 || (*stack)->n > 127)
		error_handler(ERROR_PCHAR_RANGE);

	printf("%c\n", (*stack)->n);
}
