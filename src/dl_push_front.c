/*
** EPITECH PROJECT, 2024
** dragusheen linked_list-library
** File description:
** library
*/

#include "dlist.h"

void dl_push_front(lnode_t **head, void *data)
{
    lnode_t *new_node = malloc(sizeof(lnode_t));

    if (new_node == NULL)
        return;
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
