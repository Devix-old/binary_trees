#include "binary_trees.h"
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return(0);
	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
