#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_height - function that neasures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: The height of the binary tree, Otherwise 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
     size_t height_left, height_right;

    if (tree == NULL)
        return (0);

    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    return (1 + (height_left > height_right ? height_left : height_right));
}