#include "monty.h"

/**
 * _mod_ - a function that computes the rest of the division of the
 * second top element of the stack by the top element of the stack
 * @stack: the input stack
 * @line_number: the line number
 * Return: Nothing
 */
void _mod_(stack_t **stack, unsigned int line_number)
{
	int modulo;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(ERROR_MOD);

	if ((*stack)->n == 0)
		error_handler(ERROR_DIV_ZERO);

	modulo = (*stack)->next->n % (*stack)->n;

	_pop_(stack, line_number);
	(*stack)->n = modulo;
}
