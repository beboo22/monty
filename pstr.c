#include "monty.h"
/**
 * _pstr - prints the string starting at the top
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _pstr(stack_t **hd, unsigned int cntr)
{
	stack_t *h;
	(void)cntr;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
