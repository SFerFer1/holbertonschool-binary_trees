#include "binary_trees.h"

/**
 * binary_tree_uncle - View the uncle of the node
 * @node: Node tu verefy
 *
 * Return: A pointer to uncle of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		else
			return (node->parent->parent->right);

	}


	if (node->parent->parent->right == node)
	{
		if (node->parent->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
