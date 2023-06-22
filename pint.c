#include "monty.h"
/**
 * _pint - prints the top
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _pint(stack_t **hd, unsigned int cntr)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
