#include "binary_trees.h"
/**
* *binary_tree_sibling - checks if a node is a leaf.
*
*@node: a pointer to a parent node of the node to create.
*
*Return:  1 if node is a leaf, otherwise 0.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		else
			return (node->parent->right);

	}


	if (node->parent->right == node)
	{
		if (node->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->left);
	}
	return (NULL);
}
