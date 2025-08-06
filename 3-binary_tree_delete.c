#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes all nodes of the binary tree.
 * @tree: Reference to the main tree.
 * Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
