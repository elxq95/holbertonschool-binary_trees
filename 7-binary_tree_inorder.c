#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses the binary tree using the inorder algorithm
 * @tree: binary tree to traverse
 * @func: function to perform on each node
 *
 * Return: void, returns a NULL void pointer
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
