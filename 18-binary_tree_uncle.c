#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @tree: is a pointer to the target node
 * Return: If tree is NULL, your function must return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->right);
	return(node->parent->parent->left);
}
