#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* If both children are NULL, the node is a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If both children are not NULL, check if both subtrees are full */
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If one child is NULL and the other is not, the tree is not full */
    return (0);
}

