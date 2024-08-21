#include "list.h"
#include <iostream>
using namespace std;
// subclass of List
class ArrayList : public List {
	int size=0;
	int array[50];
	
	public:
	void add(int num) {
		cout << "Hi " << num <<endl;
		if (size < 5){
			array[size++] = num;
		}	
		else {
			cout << "stop it" << endl;
		}
	}
	
	int remove(int num) {
		// Step 1: Find the num
		for (int i = 0; i < size; i++) {
			if (num == array[i]) {
				for (int j=i; j<size-1;j++) {
					array[j] = array[j+1];
				}
				size--;
				return i+1;
			}
		}
		return -1;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void print() {
		cout << "Size: " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
