#include "monty.h"


/**
 * _div_ - a function divides the second top element of the stack
 * by the top element of the stack
 * @stack: the input stack
 * @line_number: the line number
 * Return: Nothing
 */
void _div_(stack_t **stack, unsigned int line_number)
{
	int quotient;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(ERROR_DIV);

	if ((*stack)->n == 0)
		error_handler(ERROR_DIV_ZERO);

	quotient = (*stack)->next->n / (*stack)->n;

	_pop_(stack, line_number);
	(*stack)->n = quotient;
}
