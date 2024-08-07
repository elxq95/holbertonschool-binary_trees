#include "binary_trees.h"

/**
 * binary_tree_depth - calculates how deep a node is in a tree recursively
 * @tree: node to start from
 *
 * Return: 0 of node has no parent, 1 + previous node count
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
