#include "monty.h"
/**
 * fadd - adds the top two elements
 * @_head: head
 * @cntr: counter
 * Return: no return
*/
void fadd(stack_t **_head, unsigned int cntr)
{
	stack_t *h;
	int len = 0, aux;

	h = *_head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*_head);
		exit(EXIT_FAILURE);
	}
	h = *_head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*_head = h->next;
	free(h);
}
