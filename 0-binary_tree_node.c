#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in to the new node
 * Return: A pointer to the new node, otherwise NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    return (new_node);
}