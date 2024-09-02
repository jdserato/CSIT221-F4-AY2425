#include <iostream>
#include "board.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Scoreboard* board = new Scoreboard();
	entry player;
	char op;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cout << "Name: ";
				cin >> player.name;
				cout << "College: ";
				cin >> player.college;
				cout << "Score: ";
				cin >> player.score;
				board->add(player);
				break;
			case 'p':
				board->print(0);
				break;
			case 'x':
				cout << "Exiting...";
				return 0;
		}
	}
	return 0;
}
