#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree using postorder algorithm
 * @tree: the tree to traverse
 * @func: function to call on each node
 *
 * Return: void, returns a NULL void pointer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
