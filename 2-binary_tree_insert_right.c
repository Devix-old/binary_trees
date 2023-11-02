#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the parent node to insert the right child
 * @value: value to put in the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;
	if (parent->right != NULL)
	{

		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
