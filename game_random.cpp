#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));
	int rand_num = 1 + rand() % 15;
	int user_input;
	bool stop = false;
	do {
		cout << "������� ����� �� 1 �� 15: ";
		cin >> user_input;
		if (user_input != rand_num)
			cout << "�� �� �������" << endl;
		else
			stop = true;
	} while (!stop);
	cout << "�� ��������";
	return 0;
}