#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right chilg of another
 * @parent: parent node
 * @value: value of the node
 * Return: NULL or pointer to the node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		parent->right->parent = new;
	}
	new->right = parent->right;
	parent->right = new;
	new->n = value;
	new->left = NULL;
	new->parent = parent;
	return (new);
}
