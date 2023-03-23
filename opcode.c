#include "monty.h"

/**
 * opcode_match - a function for opcodes
 * Return: functions
 */
void (*opcode_match(void))(stack_t **stack, unsigned int line_number)
{
	instruction_t *num;
	char *op_input;
	static instruction_t instruct[] = {
		{"push", _push_}, {"pall", _pall_},
	/*	{"pint", _pint}, {"pop", _pop}, {"swap", _swap}, */
	/*	{"add", _add}, {"nop", _nop}, {"sub", _sub}, */
	/*	{"div", _div}, {"mul", _mul}, {"mod", _mod}, */
	/*	{"pchar", _pchar}, */
		{NULL, NULL}
	};

	num = instruct;
	op_input = inventory->input[0];

	while (num->opcode && strncmp(num->opcode, op_input, strlen(op_input)))
		num++;

	if (!num->f)
		error_handler(ERROR_UNKNOWN);

	return (num->f);
}
