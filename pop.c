#include "monty.h"
/**
 * f_pop - this prints the top
 * @head: stack head
 * @ln_num: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int ln_num)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", ln_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
