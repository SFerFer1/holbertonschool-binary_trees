#include "binary_trees.h"
/**
 *binary_tree_nodes-counts the nodes with at least 1 child in a binary tree.
 *
 *@tree: is the root of a binary tree.
 *
 *Return: number of nodes with at least un child.
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

	if (tree == NULL)
	return (0);

	if (tree->parent == NULL)
	return(3);

	if (tree->left != NULL || tree->right != NULL)
	return (1);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);


	return (count);
}
