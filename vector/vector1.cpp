#include "../std_lib_facilities.h"

int main ()
{

	vector<int> v = {1, 2, 3, 4, 5, 6};

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	vector<string> philosophers = {"Kant", "Plato", "Hume"};

	for (auto name : philosophers)
		cout << name << endl;

	vector<double> dv;

	cout << "Vector size is: " << dv.size() << endl;

	dv.push_back(2.8);
	dv.push_back(4.5);

	for (auto value : dv)
		cout << value << endl;

	cout << "Vector size is: " << dv.size() << endl;

	return 0;

}