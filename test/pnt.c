#include "monty.h"
/**
 * f_pnt - print top
 * @head: head
 * @counter: counter
 * Return: not exist
*/
void f_pnt(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
