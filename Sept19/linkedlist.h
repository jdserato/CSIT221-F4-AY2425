#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;
class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	public:
	void add(int num) {
		node* n = new node;
		n->elem = num;
		n->next = NULL;
		if (!head) {
			head = n;
			tail = n;
		} else {
			tail->next = n;
			tail = n;
		}
		size++;
	}
	void addTail(int num) {
		add(num);
	}
	void addHead(int num) {
		node* n = new node;
		n->elem = num;
		n->next = NULL;
		if (!head) {
			head = n;
			tail = n;
		} else {
			n->next = head;
			head = n;
		}
		size++;
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
		return ret;
	}
	
	int remove(int num) {
		if (head->elem == num) {
			removeHead();
			return 1;
		} else {
			node* curr = head;
			node* prev = head;
			int pos = 1;
			while (curr) {
				if (curr->elem == num) {
					prev->next = curr->next;
					if (curr == tail) {
						tail = prev;
					}
					free(curr);
					size--;
					return pos;
				}
				prev = curr;
				curr = curr->next;
				pos++;
			}
		}
	}
	
	void print() {
		node* curr = head;
		if (size == 0) {
			cout << "mt";
		}
		while (curr != NULL) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl;
	}
};
