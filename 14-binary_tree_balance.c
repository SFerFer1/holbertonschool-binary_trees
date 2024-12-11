#include "binary_trees.h"
/**
 *binary_tree_balance -measures the balance factor of a binary tree.
 *
 *@tree: is the root of a binary tree.
 *
 *Return: number of nodes with at least un child.
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t h_left, h_right;

if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
return (0);

h_left = binary_tree_height(tree->left);
h_right = binary_tree_height(tree->right);



return (h_right - h_left);
}
