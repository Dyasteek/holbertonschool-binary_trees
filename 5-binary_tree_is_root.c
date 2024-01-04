#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is the root.
 * @node: Reference to the node that's going to be checked
 * Return: 0 if node is NULL or node is not a root,
 * 1 if node is a root.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
