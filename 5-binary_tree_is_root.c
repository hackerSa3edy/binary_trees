#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root.
 *
 * @node: A pointer to the node to check.
 *
 * Return: (0 If node is NULL) && (1 if node is a root), otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    int is_root = 1;

    if (node == NULL)
    {
        return (0);
    }
    
    if (node->parent != NULL)
    {
        is_root = 0;
    }
    
    return (is_root);
}