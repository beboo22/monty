#include "monty.h"
/**
 * _mul - multiplies the top two elements
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _mul(stack_t **hd, unsigned int cntr)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	ax = h->next->n * h->n;
	h->next->n = ax;
	*hd = h->next;
	free(h);
}
