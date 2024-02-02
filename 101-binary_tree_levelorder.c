#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1000);

	if (queue == NULL)
		return;

	int front = 0, rear = 0;

	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);
		if (current->left != NULL)
			queue[rear++] = current->left;
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
	free(queue);
}

