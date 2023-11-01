#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	size_t left_height = tree_height(tree->left);
	size_t right_height = tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	int left_height = (int)tree_height(tree->left);
	int right_height = (int)tree_height(tree->right);

	return (left_height - right_height);
}
