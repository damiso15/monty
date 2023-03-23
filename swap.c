#include "monty.h"

/**
 * _swap_ - a function swaps the top two elements of the stack
 * @stack: the input stack
 * @line_number: the line number
 * Return: Nothing
 */
void _swap_(stack_t **stack, unsigned int line_number)
{
	int temp;
	(void)line_number;

	if (!stack || !*stack || !(*stack)->next)
		error_handler(ERROR_SWAP);

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
