#include "monty.h"
/**
  *_rotr - rotates
  *@hd: head
  *@cntr: counter
  *Return: no return
 */
void _rotr(stack_t **hd, __attribute__((unused)) unsigned int cntr)
{
	stack_t *copy;

	copy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *hd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*hd)->prev = copy;
	(*hd) = copy;
}
