#include "binary_trees.h"
/**
* *binary_tree_insert_right - that creates a binary tree node.
*
*@parent: a pointer to the parent node of the node to create.
*@value: the value to put in the new node.
*
*Return: a pointer to the new node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));
if (new_tree == NULL)
return (NULL);

if (parent == NULL)
return (NULL);

new_tree->n = value;
new_tree->right = NULL;

if (parent->right != NULL)
{
new_tree->right = parent->right;
}


new_tree->left = NULL;
parent->right = new_tree;
new_tree->parent = parent;


return (new_tree);
}
