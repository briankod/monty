#include "monty.h"

/**
 * instr_pall - prints all the values on the stack,from the top.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *item = *stack;

	(void)(line_number);
	while (item != NULL)
	{
		printf("%d\n", item->n);
		item = item->next;
	}
}
