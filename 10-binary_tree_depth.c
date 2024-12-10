#include "binary_trees.h"

/**
 * binary_tree_depth - Serch depth of the tree
 * @tree: Is a node of the bainary tree
 *
 * Return: The depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if ((tree == NULL) || (tree->parent == NULL))
		return (count);

	count = binary_tree_depth(tree->parent);
	return (1 + count);
}
