#include "monty.h"

/**
 * main - the main function
 * @argc: the arguments count
 * @argv: arguments inventory
 * Return: 0 as Success
 */
int main(int argc, char **argv)
{
	void (*exe)(stack_t **stack, unsigned int line_number);
	size_t num;

	inventory = NULL;
	if (argc != 2)
		error_handler(ERROR_USAGE_FILE);

	inv();
	inventory->filename = argv[1];
	inventory->file = fopen(inventory->filename, "r");

	if (inventory->file == NULL)
		error_handler(ERROR_OPEN_FILE);

	while (getline(&inventory->line, &num, inventory->file) > 0)
	{
		inventory->linenum++;

		if (line_parse(inventory->line) == EXIT_FAILURE)
			continue;

		exe = opcode_match();
		exe(&inventory->stack, inventory->linenum);
	}

	free_all();

	return (EXIT_SUCCESS);
}
