#include "binary_trees.h"
#include <math.h>
#include <stdio.h>
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

	if (binary_tree_is_leaf(tree))
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

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (1 + h_left);
	else
		return (1 + h_right);

}
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

	if (tree->left == NULL && tree->right == NULL)
		return (1);

count += binary_tree_leaves(tree->left);
count += binary_tree_leaves(tree->right);


	return (count);
}
/**
*binary_tree_is_perfect - checks if a node is a root.
*
*@tree: a pointer to a parent node of the node to create.
*
*Return:  1 if node is a root, otherwise 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t cantl = 1;
	size_t i;
	size_t leafs = binary_tree_leaves(tree);

	if (tree == NULL)
	return (0);

	for (i = 0 ; i < height ; i++)
	{
		cantl *= 2;
	}

	if (tree == NULL)
		return (0);
	if (!binary_tree_is_full(tree))
		return (0);
	else
	{
		if (cantl == leafs)
			return (1);
		else
			return(0);
	}
}
