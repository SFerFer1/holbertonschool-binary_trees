#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves
 * @tree: The root
 *
 * Return: The number of the leaves or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		count++;

	return (count);
}
