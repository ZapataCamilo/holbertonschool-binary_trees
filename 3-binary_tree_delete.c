#include "binary_trees.h"

/**
 * 
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return;

    while (tree->left != NULL)
        free(tree->left);
    while (tree->right != NULL)
        free(tree->right);
    free(tree->parent);
    free(tree);
}