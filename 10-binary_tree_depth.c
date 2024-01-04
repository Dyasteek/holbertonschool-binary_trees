#include "binary_trees.h"

/**
 * binary_tree_depth - Check the deep of a node in a tree.
 * @tree: Reference to the node.
 * Return: The depth of the node, if the node is NULL
 * return: 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;
    binary_tree_t *iter;


    if (tree == NULL)
        return (0);
    
    iter = (binary_tree_t *)tree;

    while (iter != NULL)
    {
        depth++;
        iter = iter->parent;
    }

    return (depth - 1);
}
