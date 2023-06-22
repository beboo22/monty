#include "monty.h"
/**
 * _pall - prints the stack
 * @hd: head
 * @cntr: ignored
 * Return: no return
*/
void _pall(stack_t **hd, unsigned int cntr)
{
	stack_t *h;
	(void)cntr;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
