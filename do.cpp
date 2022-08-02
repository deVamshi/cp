#include <bits/stdc++.h>
using namespace std;


struct BinaryTreeNode {
	int val;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
};


BinaryTreeNode *create() {

	int x;
	cout << "Enter the vallue: ";
	cin >> x;

	BinaryTreeNode *p;
	// read x from the user
	if(x == -1) return NULL;

	else {
		p -> val = x;
		p -> left = create();
		p -> right = create();
	}

	return p;
}

void preOrder(BinaryTreeNode *node){
	if(!node) return;
	cout << node -> val;
	preOrder(node -> left);
	preOrder(node -> right);
}


int main () {

	// BinaryTreeNode *root = create();

	cout << "E";

	// preOrder(root);

	return 0;
}