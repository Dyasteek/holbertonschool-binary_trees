#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *binary_tree_insert_left - inserts a node as the right-child of another node
 *@parent: is the parent
 *@value: is  the value os isnert
 *Return: NULL o ne
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
