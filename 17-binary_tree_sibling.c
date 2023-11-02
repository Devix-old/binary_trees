#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node or NULL if no sibling or invalid input
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}

	if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	}

	return (NULL);
}
