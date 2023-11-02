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
 * binary_tree_leaves - counts the number of leaf nodes in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaf nodes, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
