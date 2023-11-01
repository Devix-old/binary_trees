#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp = tree;
	while (temp->parent)
	{
		depth += 1;
		temp = temp->parent;
	}
	return (depth);
}
