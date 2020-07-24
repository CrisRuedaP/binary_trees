#include "binary_trees.h"

/**
 * max - returns maximum of two integers
 * @a: integer
 * @b: integer
 * Return: maximum of two integers
 */
int max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * height - Compute the height of a tree
 * @tree: is a pointer to the root node of the tree
 * to measure the balance factor
 * Return: If tree is not empty then height = 1
 * + max of left height and right heights
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}
