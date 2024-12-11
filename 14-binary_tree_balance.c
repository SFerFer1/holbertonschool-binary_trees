#include "binary_trees.h"
/**
*binary_tree_height - goes through a binary tree using in-order traversal.
*
*@tree:  is a pointer to the root node of the tree to traverse.
*
*Return: return heigth of the tree or 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t h_left, h_right;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);


h_left = binary_tree_height(tree->left);
h_right = binary_tree_height(tree->right);

if (h_left > h_right)
return (1 + h_left);
else
return (1 + h_right);
}
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

if (tree == NULL)
return (0);




h_left = binary_tree_height(tree->left);
h_right = binary_tree_height(tree->right);


return (h_left - h_right);
}
