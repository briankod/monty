#include "monty.h"

void instr_push(stack_t **stack, unsigned int line_number)
{
	stack_t *item = malloc(sizeof(stack_t));
	char *opr;
	int value;

	if (item == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	opr = strtok(NULL, "\n\t\r ");
	if (opr == NULL || isdigit(opr) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(opr);
	item->n = value;
	item->prev = NULL;
	item->next = *stack;
	(*stack)->prev = item;
	*stack = item;
}

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
