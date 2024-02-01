#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, return 0 else return size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count = 1;

	if (tree->left)
		count += binary_tree_size(tree->left);
	if (tree->right)
		count += binary_tree_size(tree->right);
	return (count);

}
