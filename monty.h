#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void _push(stack_t **hd, unsigned int counter);
void _pall(stack_t **hd, unsigned int cntr);
void _pint(stack_t **hd, unsigned int cntr);
int exe(char *content, stack_t **stack, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void _pop(stack_t **hd, unsigned int cntr);
void _swap(stack_t **hd, unsigned int cntr);
void _add(stack_t **hd, unsigned int cntr);
void _nop(stack_t **head, unsigned int cntr);
void _sub(stack_t **hd, unsigned int cntr);
void _div(stack_t **hd, unsigned int cntr);
void _mul(stack_t **hd, unsigned int cntr);
void _mod(stack_t **hd, unsigned int cntr);
void _pchar(stack_t **hd, unsigned int cntr);
void _pstr(stack_t **hd, unsigned int cntr);
void adnode(stack_t **hd, int n);
void adqueue(stack_t **hd, int n);
void _queue(stack_t **hd, unsigned int cntr);
void _stack(stack_t **hd, unsigned int cntr);
#endif
