#include "../std_lib_facilities.h"

int main () {

	constexpr double cm_per_inch = 2.54;

	double length = -1;
	char unit = 0;

	cout << "Please enter a length followed by a unit (c or i)!: \n";
	cin >> length >> unit;

/*
	if (unit == 'i')
		cout << length << " " << unit << " is " << length * cm_per_inch << " cm\n";
	else if (unit == 'c')
		cout << length << " " << unit << " is " << length / cm_per_inch << " inch\n";
	else
		cout << " Error, you selected a non correct unit!\n";
*/

	switch (unit){
		case 'i':
			cout << length << " " << unit << " is " << length * cm_per_inch << " cm\n";
			break;
		case 'c':
			cout << length << " " << unit << " is " << length / cm_per_inch << " inch\n";
			break;
		default:
			cout << " Error, you selected a non correct unit!\n";
			break;
	}

	return 0;

}