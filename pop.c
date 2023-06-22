#include "monty.h"
/**
 * _pop - prints the top
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _pop(stack_t **hd, unsigned int cntr)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*hd = h->next;
	free(h);
}
