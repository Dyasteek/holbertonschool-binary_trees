#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *binary_tree_preorder -  binary tree using pre-order traversal
 *@tree: is the tree
 *@func: is a pointer of the function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
