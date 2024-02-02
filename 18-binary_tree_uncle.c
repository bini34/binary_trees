#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 *		If node is NULL, return NULL
 *		If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	binary_tree_t *temp = node->parent;

	if (node->parent->parent != NULL)
		node = node->parent->parent;
	else
		return (NULL);
	if (node->left != temp)
	{
		if (node->left != NULL)
			return (node->left);
		else
			return (NULL);
	}
	else
	{
		if (node->right != NULL)
			return (node->right);
		else
			return (NULL);
	}
}
