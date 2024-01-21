/*
 * File_name: addnode.c
 * Created: 21 january 2024
 * Auth: Lebogang Manamela
 *       Nonkululeko Sebiloane
 * Weight: 2
 * Project: 0x19. C - Stacks, Queues - LIFO, FIFO
 */

#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
 */
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
