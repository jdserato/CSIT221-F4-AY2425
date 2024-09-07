#include <iostream>
#include "course.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Course* csit = new Course();
	Student* s;
	char op;
	while (true) {
	    cout << "Op: ";
	    cin >> op;
	    switch (op) {
	        case 'a':
	        	s = new Student;
	            cout << "Name: ";
	            cin >> s->name;
	            csit->addStudent(s);
	            break;
	        case 'p':
	            csit->print();
	            break;
	        case 'x':
	            return 0;
	    }
	}
	return 0;
}
