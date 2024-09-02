#include "entry.h"
#include <iostream>
using namespace std;

class Scoreboard {
	entry board[5];
	int size;
	
	public:
	bool add(entry e) {
		board[size++] = e;
		return true;
	}
	
	void print(int i) {
		cout << i << endl;
		for (int i=0; i<5; i++) {
			cout << i+1 << ". ";
			if (i < size) {
				entry e = board[i];
//				cout << e.name << " ("
//					<< e.college << ") - "
//					<< e.score << endl;
			} else {
//				cout << "(none)" << endl;
			}
		}
		print(i+1);
	}
};
