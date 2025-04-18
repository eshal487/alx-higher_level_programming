#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * print_listint - prints all elements of a listint_t list
 *   * @h: pointer to head of list
 *    * Return: number of nodes
 *     */
size_t print_listint(const listint_t *h)
{
	    const listint_t *current;
	        unsigned int n = 0;

		    current = h;
		        while (current != NULL)
				    {
					            printf("%i\n", current->n);
						            current = current->next;
							            n++;
								        }

			    return (n);
}

/**
 *  * add_nodeint - adds a new node at the beginning of a listint_t list
 *   * @head: double pointer to the head of the list
 *    * @n: integer to include in the new node
 *     * Return: address of the new element, or NULL if it failed
 *      */
listint_t *add_nodeint(listint_t **head, const int n)
{
	    listint_t *new;

	        new = malloc(sizeof(listint_t));
		    if (new == NULL)
			            return (NULL);

		        new->n = n;
			    new->next = *head;
			        *head = new;

				    return (new);
}

/**
 *  * free_listint - frees a listint_t list
 *   * @head: pointer to the head of the list
 *    */
void free_listint(listint_t *head)
{
	    listint_t *current;

	        while (head != NULL)
			    {
				            current = head;
					            head = head->next;
						            free(current);
							        }
}

