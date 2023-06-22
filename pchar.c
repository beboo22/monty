#include "monty.h"
/**
 * _pchar - prints the char at the top
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _pchar(stack_t **hd, unsigned int cntr)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
