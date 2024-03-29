#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 *		If node is NULL or the parent is NULL, return NULL
 *		If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	temp = node;
	node = node->parent;
	if (node->left != NULL)
	{
		if (node->left == temp)
		{
			if (node->right != NULL)
				return (node->right);
			else
				return (NULL);
		}
		else
			return (node->left);
	}
	else
		return (NULL);
}
