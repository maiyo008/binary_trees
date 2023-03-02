#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
   of another node.
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store the new node
 * Return: pointer to the node created, otherwise NULL if parent is
   NULL or on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;
    return (new_node);
}