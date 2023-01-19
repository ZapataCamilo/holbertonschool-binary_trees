#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height_f = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		height_f = binary_tree_depth(tree->parent);
		height_f++;
	}
	return (height_f);
}
