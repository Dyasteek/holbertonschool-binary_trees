#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: Pointer to the root node of the tree to traverse
 *Return: 0 o Depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		Depth++;
		tree = tree->parent;
	}
	return (Depth);
}
