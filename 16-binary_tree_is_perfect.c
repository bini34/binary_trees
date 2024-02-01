#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return:  tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((binary_tree_height(tree->left) - binary_tree_height(tree->right)) == 0)
		return (1);
	else
		return (0);
}

