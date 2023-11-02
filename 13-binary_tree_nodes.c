#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
/**
 * binary_tree_nodes - counts the number of nodes in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes, 0 if tree is NULL or a leaf
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (binary_tree_is_leaf(tree) || tree == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
