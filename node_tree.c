#include <stdio.h>

typedef struct node {
	float val;
	struct node *next;
} node_t;
typedef struct dnode {
	float val;
	struct dnode *n1;
	struct dnode *n2;
} dnode_t;
float sum(node_t *root) {
	float total = root->val;
	if (root->next != NULL) total *= sum(root->next);
	return total;
}
float dsum(dnode_t *root) {
	float total = root->val;
	if (root->n1 != NULL) total *= dsum(root->n1);
	if (root->n2 != NULL) total *= dsum(root->n2);
	return total;
}
int main() {
	node_t root = {2.0f, NULL};
	node_t sub1 = {3.0f, NULL};
	node_t sub2 = {4.0f, NULL};
	root.next = &sub1;
	sub1.next = &sub2;
	dnode_t dsubsub1 = {5.0f, NULL, NULL};
	dnode_t dsubsub2 = {4.0f, NULL, NULL};
	dnode_t dsub1 = {3.0f, &dsubsub1, &dsubsub2};
	dnode_t dsub2 = {2.0f, NULL, NULL};
	dnode_t droot = {1.0f, &dsub1, &dsub2};
	printf("%f\n", sum(&root));
	printf("%f\n", dsum(&droot));
}
