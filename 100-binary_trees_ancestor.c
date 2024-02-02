#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 *         If no common ancestor was found, return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *arr[1024];
	int i, j;

	if (first == NULL || second == NULL)
		return (NULL);
	for (i = 0; i < 1024; i++)
		arr[i] = NULL;
	for (i = 0; first != NULL; i++)
	{
		arr[i] = first;
		first = first->parent;
	}
	for (; second != NULL;)
	{
		for (j = 0; j <= i; j++)
		{
			if (arr[j] == second)
				return ((binary_tree_t *)arr[j]);
		}
		second = second->parent;
	}
	return (NULL);
}

