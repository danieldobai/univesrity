#include "../std_lib_facilities.h"

int main () {

	int a = 0, b = 0;

	cout << "Please enter two number: \n";
	cin >> a >> b;

	if (a < b)
		cout << "Max (" << a << "," << b << "): " << b << endl;
	else
		cout << "Max (" << a << "," << b << "): " << a << endl;

	return 0;

}