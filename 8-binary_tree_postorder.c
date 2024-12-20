#include "binary_trees.h"
/**
*binary_tree_postorder - goes through a binary tree using post-order traversal.
*
*@tree:  is a pointer to the root node of the tree to traverse.
*@func:is a pointer to a function to call for each node.
*
*Return: If tree or func is NULL.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;

if (func == NULL)
return;


binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
