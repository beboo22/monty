#include "monty.h"
/**
* exe - execute
* @stk: head
* @cntr: counter
* @file: poiner
* @cntnt: content
* Return: no return
*/
int exe(char *cntnt, stack_t **stk, unsigned int cntr, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", fadd},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(cntnt, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stk, cntr);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", cntr, op);
		fclose(file);
		free(cntnt);
		free_stack(*stk);
		exit(EXIT_FAILURE); }
	return (1);
}
