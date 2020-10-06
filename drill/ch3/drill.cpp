#include "../../std_lib_facilities.h"

int main ()
{

	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age = 0;

	cout << "Please enter your friend's first name!\n";

	cin >> first_name;

	cout << "Dear, "<< first_name << "!\n";
	cout << "How are you?\nI'm fine.\nI miss you!\n";

	cout << "Please enter your friend's name!\n";
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Enter your friend's sex.\n";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me\n";
	else
		simple_error("Not valid sex! (m)ale or (f)emale.");

	cout << "Please enter your friend's age!\n";
	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("You're kidding!");

	if (age < 12)
		cout << "Next year you will be " << age+1 << endl;
	else if(age == 17)
		cout << "Next year you will be able to vote.\n";
	else if(age == 70)
		cout << "I hope you are enjoying retirement.\n";
	
	cout << "Yours sincerely,\n";
	cout << endl;
	cout << endl;
	cout << "Dobai Dániel\n";

	return 0;

}