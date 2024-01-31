#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 *
 * Return: A pointer to the created node / NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *buffer;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		buffer = parent->right;
		parent->right = new_node;
		parent->right->right = buffer;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}
