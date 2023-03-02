#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_postorder - function that goes through a binary using post-order
* @tree: a pointer to the root  node of the trasverse 
* @func: a pointer to a function to call for each node.
* The value in the node must be passed as a parameter to this function.
Return: Nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}