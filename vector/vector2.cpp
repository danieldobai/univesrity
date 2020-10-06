#include "../std_lib_facilities.h"

int main ()
{

	vector<double> temps;

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	for (auto temp : temps)
		cout << temp << endl;

	double sum = 0;
	for (auto temp : temps)
		sum += temp;

	cout << "Átlag hőmérséklet " << sum / temps.size() << endl;

	cout << "Median temp: " << temps[temps.size()/2] << endl;

	sort(temps);
		for (auto temp : temps)
			cout << temp << endl;

	return 0;

}