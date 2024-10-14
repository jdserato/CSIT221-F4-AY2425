#include "list.h"
#include <iostream>
#include <cstdlib>
using namespace std;
// subclass of List
class ArrayList : public List {
	int size;
	int capacity;
	int* array;
	
	public:
	ArrayList() {
		size = 0;
		capacity = 5;
		array = (int*) calloc(capacity , sizeof(int));
	}
	
	int getSize() {
		return size;
	}
	
	void add(int num) {
		cout << "Hi " << num <<endl;
		if (size < capacity){
			array[size++] = num;
		}	
		else {
			capacity *= 1.5;
			array = (int*) realloc(array, capacity * sizeof(int) );
			cout << "Address of array: "<< array << endl;
			array[size++] = num;
		}
	}
	
	int removeLast() {
		return array[--size];
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
		cout << "Size: " << size << "/" << capacity << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
