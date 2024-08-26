#include "list.h"
#include <iostream>
using namespace std;
// subclass of List
class ArrayList : public List {
	int array[5];
	int size = 0;
	
	void add(int num) {
		array[size++] = num;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
