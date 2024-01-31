#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree.
 *
 * @tree: A pointer to the root node of the tree to delete.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *r_node, *l_node;

	if (tree == NULL)
	{
		return;
	}
	r_node = tree->left;
	l_node = tree->right;

	binary_tree_delete(r_node);
	binary_tree_delete(l_node);

	free(tree);
}
