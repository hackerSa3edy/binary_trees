#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if node
 *	is NULL, or the node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return (grandparent->right);

	return (grandparent->left);
}
