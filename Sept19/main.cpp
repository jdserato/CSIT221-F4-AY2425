#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList* list = new LinkedList();
	list->addTail(4);
	list->addTail(7);
	list->addTail(13);
	list->addTail(26);
	list->addHead(2);
	list->print();
	cout << "3rd elem: " << list->get(3) << endl;
	cout << "1rd elem: " << list->get(1) << endl;
	cout << "5rd elem: " << list->get(5) << endl;
	cout << "position removed is " << list->remove(2) << endl;
	list->print();
	cout << "position removed is " << list->remove(26) << endl;
	list->print();
	list->addTail(30);
	list->print();
	return 0;
}
