#include <iostream>
using namespace std;
#ifndef _OCTAGON
#define _OCTAGON

class Octagon {
private:
	int side;
	int j; //used for inside space
	int r; //used for inside space
	int k; //constant for outside space
public:
	Octagon();
	Octagon(const double sidePar);
	int getSide() { cin >> side; return side; };
	int returnSide();
	void display(const double sidePar);
};
#endif // !_OCTAGON
