#include <iostream>
#include "point.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Point p1 = { 2, 1 };
	Point p2 = { 8, 5 };
	Point res = p1.midpoint(&p2);
	cout << res.x << ", " << res.y << endl;
	res = p2.midpoint(&p1);
	cout << res.x << ", " << res.y << endl;
	return 0;
}


