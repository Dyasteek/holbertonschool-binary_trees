#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	free(tree);
	if (tree == NULL)
		return;
}
