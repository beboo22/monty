#include "monty.h"
/**
* free_stack - free
* @hd: head
*/
void free_stack(stack_t *hd)
{
	stack_t *ax;

	ax = hd;
	while (hd)
	{
		ax = hd->next;
		free(hd);
		hd = ax;
	}
}
