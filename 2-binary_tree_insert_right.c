#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: is the parent
 *@value: is the value oof insert
 *Return: NULL o new
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
