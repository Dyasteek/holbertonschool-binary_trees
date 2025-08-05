#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *binary_tree_node - creates a binary tree node
 *@parent: is the parent
 *@value: is the value of new->n
 *Return: NULL o new
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));


	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
