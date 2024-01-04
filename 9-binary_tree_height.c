#include "binary_trees.h"

/**
 * binary_tree_height_r - Returns the height of a tree.
 * @tree: Reference to the node that is the root of the tree.
 * Return: The height of the tree.
*/

size_t binary_tree_height_r(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = (binary_tree_height_r(tree->left));
	r_height =  (binary_tree_height_r(tree->right));

	if (l_height > r_height)
		return (1 + l_height);
	else
		return (1 + r_height);
}

/**
 * binary_tree_height - Returns the height of a tree.
 * @tree: Reference to the node that is the root of the tree.
 * Return: The height of the tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_r(tree) - 1);
}
