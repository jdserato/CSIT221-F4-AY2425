#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList* list = new LinkedList();
	list->addHead(1);
	list->addTail(2);
	list->addTail(3);
	list->addTail(4);
	list->addHead(0);
	list->addHead(-1);
	list->addAt(5,3);
	list->print();
	cout << "pos 5 removed is " << list->removeAt(5) << endl;
	list->print();
	list->addTail(6);
	list->print();
	return 0;
}
