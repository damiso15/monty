#include "monty.h"


/**
 * _mul_ - a function multiplies the second top element of the stack with
 * the top element of the stack
 * @stack: the input stack
 * @line_number: the line number
 * Return: Nothing
 */
void _mul_(stack_t **stack, unsigned int line_number)
{
	int multiply;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(ERROR_MUL);

	multiply = (*stack)->next->n * (*stack)->n;

	_pop_(stack, line_number);
	(*stack)->n = multiply;
}
