#include "Header2.h";


int q2::BinaryTree::max_depth(Node* node)
{
	if (node == nullptr)
		return -1;
	else {
		int leftDepth = max_depth(node->left);
		int rightDepth = max_depth(node->right);
		return (leftDepth > rightDepth) ? leftDepth + 1 : rightDepth + 1;
	}
}

void q2::BinaryTree::max_depth_delete(Node* node, int temp_pos)
{
	temp_pos--;
	if (temp_pos == 0) {
		if (max_depth(node->left) == max_depth(node->right))
			delete node;
		else return;
	}
	max_depth_delete(node->left, temp_pos);
	max_depth_delete(node->right, temp_pos);
}


q2::BinaryTree::Node::~Node()
{
	delete left;
	delete right;

}
