#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 *
 * Return: A pointer to the created node / NULL on failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *buffer;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		buffer = parent->left;
		parent->left = new_node;
		parent->left->left = buffer;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}
