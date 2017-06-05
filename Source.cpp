#include <iostream>
#include "Octagon.h"
using namespace std;

int main() {
	int userSide;
	Octagon myOctagon;
	char tryAgain = 'y';
	while (tryAgain == 'y' || tryAgain == 'Y') {
		cout << "Enter the octagon side value: ";
		myOctagon.getSide();
		userSide = myOctagon.returnSide();

		if (userSide < 3 || userSide > 8) {
			cout << "The side value must be between 3 and 8" << endl;
			tryAgain = 'y';
		}
		else
			tryAgain = 'n';
	}

	switch (userSide) {

	case 3:
		myOctagon.display(3);
		break;
	case 4:
		myOctagon.display(4);
		break;
	case 5:
		myOctagon.display(5);
		break;
	case 6:
		myOctagon.display(6);
		break;
	case 7:
		myOctagon.display(7);
		break;
	case 8:
		myOctagon.display(8);
		break;
	}
	system("pause");
	return 0;
}
