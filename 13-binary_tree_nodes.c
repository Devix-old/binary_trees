#include "binary_trees.h"
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (binary_tree_is_leaf(tree) || tree == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
