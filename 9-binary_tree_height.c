#include "binary_trees.h"
/**
*binary_tree_height - goes through a binary tree using in-order traversal.
*
*@tree:  is a pointer to the root node of the tree to traverse.
*@func:is a pointer to a function to call for each node.
*
*Return: If tree or func is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (1 + (h_left));
	
	if (h_right >= h_left)
                return (h_right);

return (0);
}
