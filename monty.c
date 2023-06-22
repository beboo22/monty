#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty
* @argc: args
* @argv: argv
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *input_file;
	size_t s = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	input_file = fopen(argv[1], "r");
	bus.file = input_file;
	if (!input_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		cont = NULL;
		read_line = getline(&cont, &s, input_file);
		bus.content = cont;
		counter++;
		if (read_line > 0)
		{
			execute(cont, &stack, counter, input_file);
		}
		free(cont);
	}
	free_stack(stack);
	fclose(input_file);
return (0);
}
