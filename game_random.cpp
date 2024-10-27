#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));
	int rand_num = 1 + rand() % 15;
	int user_input;
	bool stop = false;
	do {
		cout << "введите число от 1 до 15: ";
		cin >> user_input;
		if (user_input != rand_num)
			cout << "вы не угадали" << endl;
		else
			stop = true;
	} while (!stop);
	cout << "вы победили";
	return 0;
}