#include "list.h"
#include "node.h"
#include <iostream>
#include <cmath>
using namespace std;
class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	void remove_node(node* n) {
		node* pred = n->prev;
		node* succ = n->next;
		pred->next = succ;
		succ->prev = pred;
		free(n);
		size--;
	}
	
	node* add_between(int num, node* pred, node* succ) {
		//Step1 : Create the node
		node* n = new node;
		n->elem = num;
		n->prev = pred;
		n->next = succ;
		pred->next = n;
		succ->prev = n;
		size++;
		return n;
	}
	
	public:
	LinkedList() {
		head = new node; // header
		tail = new node; // trailer
		head->next = tail;
		tail->prev = head;
		tail->next = NULL;
		head->prev = NULL;
		size = 0;
	}
		
	void add(int num) {
		addTail(num);
	}
	
	void addAt(int num, int pos) {
		node* curr = head;
		for (int i = 0; i < pos; i++) {
			curr = curr->next;
		}
		add_between(num, curr->prev, curr);
	}
	
	void addTail(int num) {
		add_between(num, tail->prev, tail);
	}
	void addHead(int num) {
		add_between(num, head, head->next);
	}
	int get(int pos) {
		node* curr = head;
		for (int i = 1; i < pos; i++) {
			curr = curr->next;
		}
		return curr->elem;
	}
	
	int removeHead() {
		node* tmp = head;
		head = head->next;
		int ret = tmp->elem;
		free(tmp);
		size--;
		head->prev = NULL;
		return ret;
	}
	
	int remove(int num) {
		node* curr = head->next;
		int pos = 1;
		while (curr != tail) {
			if (curr->elem == num) {
				remove_node(curr);
				return pos;	
			}
			curr = curr->next;
			pos++;
		}
	}
	
	int removeAt(int pos) { // TIME REMAINING: 480
	node* curr;
		if (pos <= ceil(size/2.0)) {
			cout << "REMOVE FROM HEAD" << endl;
			curr = head->next;
			for (int i = 1; i < pos; i++) {
				curr = curr->next;
			} 
		} else {
			cout << "REMOVE FROM TAIL" << endl;
			curr = tail->prev;
			for (int i = size; i > pos; i--) {
				curr = curr->prev;
			} 
		}
		int tmp = curr->elem;
		remove_node(curr);
		return tmp;
	}
	
	void print() {
		node* curr = head->next;
		if (size == 0) {
			cout << "mt";
		}
		cout << "From HEAD: ";
		while (curr != tail) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "From TAIL: ";
		curr = tail->prev;
		while (curr != head) {
			cout << curr->elem << " <- ";
			curr = curr->prev;
		}
		cout << endl ;
	}
};
