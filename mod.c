#include "monty.h"
/**
 * _mod - computes the the division
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _mod(stack_t **hd, unsigned int cntr)
{
	stack_t *h;
	int len = 0, ax;

	h = *hd;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	ax = h->next->n % h->n;
	h->next->n = ax;
	*hd = h->next;
	free(h);
}
