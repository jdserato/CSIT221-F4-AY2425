#include <iostream>
#include "stackarray.h"
using namespace std;
int main() {
	Stack* stack = new StackArray();
	stack->push(5);
	stack->push(3);
	cout << "Popping " << stack->pop() << endl;
	cout << "Popping " << stack->pop() << endl;
	stack->push(7);
	stack->push(9);
	stack->push(4);
	cout << "Popping " << stack->pop() << endl;
	cout << "Topping " << stack->top() << endl;
	stack->push(6);
	stack->push(8);
	cout << "Popping " << stack->pop() << endl;
	cout << "Size " << stack->size() << endl;
	cout << "Is Empty? " << stack->isEmpty() << endl;
	return 0;
}
