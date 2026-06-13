#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    tmp = *head;
    i = 0;
    while (i < index)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return (-1);
        i++;
    }

    if (tmp->prev != NULL)
        tmp->prev->next = tmp->next;
    else
        *head = tmp->next;

    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;

    free(tmp);
    return (1);
}
