#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->left);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);

}
