#include "monty.h"


/**
 * _sub_ - a function subtracts the top element of the stack from the
 * second top element of the stack
 * @stack: the input stack
 * @line_number: the line number
 * Return: Nothing
 */
void _sub_(stack_t **stack, unsigned int line_number)
{
	int minus;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(ERROR_SUB);

	minus = (*stack)->next->n - (*stack)->n;

	_pop_(stack, line_number);
	(*stack)->n = minus;
}
