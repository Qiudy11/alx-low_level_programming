#include "lists.h"
/**
* add_nodeint - Entry Point
* @head: head
* @n: value
* Return: 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
if (head == NULL)
return (NULL);
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
