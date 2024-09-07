#include "student.h"
#include <iostream>
using namespace std;

class Course {
    Student** students;
    int size;
    int capacity;
    
    public:
    Course() {
        capacity = 10;
        size = 0;
        students = (Student**) malloc(capacity * sizeof(Student*));
    }
    
    void addStudent(Student* s) {
    	cout << s->name << endl;
        students[size++] = s;
        cout << "DONE" << endl;
    }
    
    void print() {
        cout << "Student size: " << size << endl;
        for (int i = 0; i < size; i++) {
            cout << i+1 << ". " << students[i]->name << endl;
        }
    }
};
