#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
   of another node.
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store the new node
 * Return: pointer to the node created, otherwise NULL if parent is
   NULL or on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = binary_tree_node(parent, value);
    
    if (parent == NULL) {
        return (NULL);
    }
    if (new_node == NULL) {
        return (NULL);
    }
    if (parent->right != NULL) {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}