/*
** EPITECH PROJECT, 2024
** dragusheen linked_list-library
** File description:
** library
*/

#include "dlist.h"

void *dl_pop_front(lnode_t **head)
{
    void *data;
    lnode_t *tmp;

    if (head == NULL || *head == NULL)
        return NULL;
    tmp = (*head)->next;
    data = (*head)->data;
    free(*head);
    *head = tmp;
    return data;
}
