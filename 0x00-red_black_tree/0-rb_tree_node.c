#include "rb_trees.h"

rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color)
{
	rb_tree_t *node;

	node = malloc(sizeof(rb_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->color = color;
	return (node);
}
