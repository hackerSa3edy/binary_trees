#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 *
 * @node: A pointer to the node to check.
 *
 * Return: (0 If node is NULL) && (1 if node is a leaf), otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = 1;

	if (node == NULL)
	{
		return (0);
	}

	if ((node->left != NULL || node->right != NULL))
	{
		is_leaf = 0;
	}

	return (is_leaf);
}
