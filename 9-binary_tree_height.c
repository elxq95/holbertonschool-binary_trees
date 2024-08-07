#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a tree recursively
 * @tree: node to calculate from
 *
 * Return: 0 if there is no tree, the height if there is
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (!tree)
		return (0);
	else
	{
		if (tree->left)
		{
			lheight = 1 + binary_tree_height(tree->left);
		}
		else
		{
			lheight = 0;
		}
		if (tree->right)
		{
			rheight = 1 + binary_tree_height(tree->right);
		}
		else
		{
			rheight = 0;
		}
		if (lheight > rheight)
			return (lheight);
		else
			return (rheight);
	}
}
