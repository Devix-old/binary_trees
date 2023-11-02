#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);
	const binary_tree_t *temp = tree;

	while (temp != NULL)
	{
		temp = temp->left;
		if (temp)
			height_l += 1;
	}
	temp = tree;
	while (temp)
	{
		temp = temp->right;
		if (temp)
			height_r += 1;
	}
	return (height_l > height_r ? height_l : height_r);
}
