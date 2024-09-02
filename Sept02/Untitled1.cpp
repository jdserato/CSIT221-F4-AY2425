#include <iostream>
using namespace std;

struct Any {
	char* a,b,*c;
	double dbl;
	int i;
};

struct Hi {
	Any an;
	int o[5];
};

void hello(int i) {
	cout << i << endl;
	Hi h;
	hello(i+1);
}

int main() {
	cout << sizeof(Hi) << endl;
	Any any;
	hello(1);
	return 0;
}
