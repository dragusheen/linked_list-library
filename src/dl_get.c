/*
** EPITECH PROJECT, 2024
** dragusheen linked_list-library
** File description:
** library
*/

#include "dlist.h"

void *dl_get_data(lnode_t *head, int index)
{
    lnode_t *curr = head;
    int i = 0;

    while (curr != NULL) {
        if (i == index)
            return curr->data;
        i++;
        curr = curr->next;
    }
    return NULL;
}

lnode_t *dl_get_node(lnode_t *head, int index)
{
    lnode_t *curr = head;
    int i = 0;

    while (curr != NULL) {
        if (i == index)
            return curr;
        i++;
        curr = curr->next;
    }
    return NULL;
}