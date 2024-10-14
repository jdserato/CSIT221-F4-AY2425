#include "stack.h"
#include "arraylist.h"
class StackArray : public Stack {
	ArrayList* list;
	public:
	StackArray() {
		list = new ArrayList();
	}
	
	void push(int num) {
		list->add(num);
	}
	int pop() {
		if (isEmpty()) {
			return 0;
		}
		return list->removeLast();
	}
	int top() {
		if (isEmpty()) {
			return 0;
		}
		return list->get(size());
	}
	
	int size() {
		return list->getSize();
	}
	
	bool isEmpty() {
		return size() == 0;
	}
};
