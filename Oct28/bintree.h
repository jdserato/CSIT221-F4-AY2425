#include "node.h"
#include <iostream>
#include <stdexcept>
using namespace std;

class BinaryTree {
	node* root;
	int size;
	
	public:
	BinaryTree() {
		root = NULL;
		size = 0;
	}
	
	node* addRoot(int num) {
		if (root) {
			throw logic_error("Already has root");
		}
		node* n = new node();
		n->elem = num;
		root = n;
		size++;
		return root;
	}
	
	node* addLeft(node* p, int num) {
		if (p->left) {
			throw logic_error(to_string(p->elem) + " already has left child");
		}
		node* n = new node();
		n->elem = num;
		n->parent = p;
		p->left = n;
		size++;
		return n;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		cout << root->elem << endl;
		cout << root->left->elem << endl;
	}
};
