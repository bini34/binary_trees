#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: return 0 if tree is NULL else return hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hight_left = -1, hight_right = -1;

	if (tree == NULL)
		return (0);

	hight_left = binary_tree_height(tree->left);
	hight_right = binary_tree_height(tree->right);
	if (hight_left > hight_right)
		return (hight_left + 1);
	else
		return (hight_right + 1);
}
