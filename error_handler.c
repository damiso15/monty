#include "monty.h"

/**
 * error_handler - a function that handles all the errors
 * @num: the index number of error message
 * Returns: Nothing
 */
void error_handler(int num)
{
	unsigned int ind;
	static char *const err[] = {
		"Error: memory failure\n", "USAGE: monty file\n",
		NULL, NULL,
		"usage: push integer\n", "can't print, stack empty\n",
		"can't pop an empty stack\n", "can't swap, stack too short\n",
		"can't add, stack too short\n", "can't sub, stack too short\n",
		"can't div, stack too short\n", "division by zero\n",
		"can't mul, stack too short\n", "can't mod, stack too short\n",
		"can't pchar, stack empty\n", "can't pchar, value out of range\n"
	};

	if (inventory)
		ind = inventory->linenum;

	if (num <= 1)
		dprintf(STDERR_FILENO, "%s", err[num]);
	else if (num == 2)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n",
				inventory->filename);
	else if (num == 3)
		dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", ind,
				inventory->input[0]);
	else if (num == 4)
		dprintf(STDERR_FILENO, "L%u: %s", ind, err[num]);

	free_all()

	exit(EXIT_FAILURE);
}
