#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the binary tree using preorder algorithm
 * @tree: the tree to traverse
 * @func: function to call on each node
 *
 * Return: void, returns a NULL void pointer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
