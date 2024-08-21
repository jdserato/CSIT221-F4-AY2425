#include <iostream>
#include "arraylist.h"
using namespace std;
int main() {
	int num = 0;
	List* list = new ArrayList();
	list->print();
	list->add(13);
	list->add(4);
	list->add(17);
	list->add(5);
	list->add(3);
	list->print();
	cout << "Third elem is " << list->get(3) << endl;
	cout << "Fifth elem is " << list->get(5) << endl;
	cout << "Remove 4 previously found at " << list->remove(4) << endl;
	list->print();
	list->add(20);
	list->print();
	return 0;
}
