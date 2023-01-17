#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree and its children
 * @tree: pointer to head to the tree
 * Return: if tree = NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	free(tree);
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
}
