#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: Pointer to the root node of the tree to traverse
 *Return: the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (balance + 2);
	else if (tree->left != NULL && tree->right == NULL)
		return (balance - 1);
	else if (tree->left == NULL && tree->right != NULL)
		return (balance - 1);
	return (balance);
}
