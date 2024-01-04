#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of another
 * @parent: parent node
 * @value: value of the node
 * Return: NULL or pointer to the node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		parent->left->parent = new;
	}
	new->left = parent->left;
	parent->left = new;
	new->parent = parent;
	new->right = NULL;
	new->n = value;
	return (new);
}
