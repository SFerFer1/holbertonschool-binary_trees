#include "binary_trees.h"
/**
*binary_tree_is_leaf - checks if a node is a leaf.
*
*@node: a pointer to a parent node of the node to create.
*
*Return:  1 if node is a leaf, otherwise 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: The root.
 *
 * Return: The number of the leaves or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
		return (1);

	if (tree->parent == NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);


	if (left && right)
		return (1);
	else
		return (0);
}
