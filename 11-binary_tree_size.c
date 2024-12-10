#include "binary_trees.h"

/**
 * binary_tree_size - Counting the size
 * @tree: The root
 *
 * Return: The size of the tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + (right + left));
}
