#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
	system("chcp 1251>nul");
	const double kmInMile = 1.6;
	double distMile, distkm;
	cout << "������� ��������� � ������ ";
	cin >> distMile;
	distkm = distMile * kmInMile;
	cout << "��������� (� ��): " << distkm << endl;
	system("pause>nul");
	return 0;
}