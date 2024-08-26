#include <iostream>
#include "arraylist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* list = new ArrayList();
	list->add(13);
	list->add(17);
	list->add(20);
	list->add(23);
	list->add(26);
	list->print(); // Size: 5 -> 13 17 20 23 26
//	cout << "3rd elem: " << list->get(3) << endl; // 20
//	cout << "Removing 17 at pos " << list->remove(17) << endl; // 2
//	list->print(); // Size: 4 -> 13 20 23 26
//	cout << "3rd elem: " << list->get(3) << endl; // 23
	return 0;
}
