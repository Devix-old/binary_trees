#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (depth);
	while (temp->parent)
	{
		depth += 1;
		temp = temp->parent;
	}
	return (depth);
}
