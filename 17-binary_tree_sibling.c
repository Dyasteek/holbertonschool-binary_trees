#include "binary_trees.h"

/**
 * binary_tree_sibling - Write a function that finds the sibling of a node
 * @node: s a pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}

	return (NULL);
}