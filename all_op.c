#include "monty.h"

/**
 * assign_opr - based on tokens from single line, decide what function to call
 * @stack: double pointer to head of stack data structure
 * @opr: operator, aka token[0] from getline
 * @line_number: line in byte-code file being processed, zero indexed
 * Return: int for mysterious purposes
 **/
void assign_opr(stack_t **stack, char *opr, unsigned int line_number)
{
	int i = 0;
	instruction_t all_ops[] = {
		{"push", instr_push},
		{"pall", instr_pall},
		{NULL, NULL}
	};

	for (i = 0; all_ops[i].opcode; i++)
	{
		if (strcmp(opr, all_ops[i].opcode) == 0)
		{
			all_ops[i].f(stack, line_number);
			return;
		}
	}
	if (strlen(opr) != 0 && opr[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_number, opr);
		exit(EXIT_FAILURE);
	}
}
