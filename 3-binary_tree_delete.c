#include "binary_trees.h"

/**
 * 
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return (NULL);

    free(tree->left);
    free(tree->right);
    free(tree->parent);
    free(tree);
}