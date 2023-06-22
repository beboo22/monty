#include "monty.h"
/**
  *_sub- sustration
  *@hd: head
  *@cntr: counter
  *Return: no return
 */
void _sub(stack_t **hd, unsigned int cntr)
{
	stack_t *ax;
	int sus, nodes;

	ax = *hd;
	for (nodes = 0; ax != NULL; nodes++)
		ax = ax->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	ax = *hd;
	sus = ax->next->n - ax->n;
	ax->next->n = sus;
	*hd = ax->next;
	free(ax);
}
