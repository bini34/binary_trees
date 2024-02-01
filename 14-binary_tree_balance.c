#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t hight_left = 0, hight_right = 0;

	if (tree->left)
		hight_left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		hight_right = 1 + binary_tree_balance(tree->right);
	return (hight_left - hight_right);
}
