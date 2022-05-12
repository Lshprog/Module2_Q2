#pragma once

#pragma once
namespace q2 {
	struct BinaryTree {
	private:
		struct Node {
			Node* left = nullptr;
			Node* right = nullptr;
			Node(Node* left, Node* right);
			~Node();
		};
		Node* root = nullptr;

	public:
		int max_depth(Node* node);
		void max_depth_delete(Node* node, int temp_pos);

	};

}