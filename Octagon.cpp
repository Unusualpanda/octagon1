#include <iostream>
#include "Octagon.h"
using namespace std;

Octagon::Octagon() {
	side = 0;
}

Octagon::Octagon(const double sidePar) {
	side = sidePar;
}

int Octagon::returnSide() {
	return side;
}

void Octagon::display(const double sidePar) {
	int  j = 4 * (sidePar / 2);//used for inside space equation
	int r = 3 * sidePar - j;//equation for inside spaces
	int k = sidePar - 1; //constant for outside spaces
	int i; //incrimentation
	int x;//incrimentation
		  //first
	for (int i = 0; i < k; i++) {
		cout << " ";
	}
	//up to the middle	
	for (i = 0; i < sidePar; i++) {
		cout << "*";
	}
	cout << endl;
	k--;
	while (k >= 0) {
		for (i = 0; i < k; i++) {
			cout << " ";
		}
		cout << "*";
		for (i = 0; i < r; i++) {
			cout << " ";
		}
		cout << "*" << endl;
		k--;
		r = r + 2;
	}r = r - 2;
	//middle
	for (i = 1; i < sidePar; i++) {
		cout << "*";
		for (x = 0; x< r; x++) {
			cout << " ";
		}
		cout << "*" << endl;
	}
	k = 1;
	r = r - 2;
	//bottom
	while (k < sidePar - 1) {
		for (i = 0; i < k; i++) {
			cout << " ";
		}
		cout << "*";
		for (i = 0; i < r; i++) {
			cout << " ";
		}
		cout << "*" << endl;
		k++;
		r = r - 2;
	}
	//last row
	for (int i = 0; i < k; i++) {
		cout << " ";
	}for (x = 0; x < sidePar; x++) {
		cout << "*";
	}cout << endl;
}
