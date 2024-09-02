#include <iostream>
#include "arraylist.h"
using namespace std;
int main() {
	int num = 0;
	List* list = new ArrayList();
	char op;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> num;
				list->add(num);
				break;
			case 'p':
				list->print();
				break;
		}
	}
	cout << "Third elem is " << list->get(3) << endl;
	cout << "Fifth elem is " << list->get(5) << endl;
	cout << "Remove 4 previously found at " << list->remove(4) << endl;
	list->print();
	list->add(20);
	list->print();
	return 0;
}
