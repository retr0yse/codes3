#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	system("chcp 1251>nul");
	const int ftInMile = 5280;
	const double kmInMile = 1.6;
	int dMile, dFt, dKm, dM;
	cout << "��������� � ����� � �����." << endl;
	cout << "����: ";
	cin << dMile;
	cout << "����: ";
	cin << dFt;
	double distMile = dMile + (double)dFt / ftInMile;
	double distKm = distMile * kmInMile;
	dKm = (int)distKm;
	dM = (int)((distKm - dKm) * 1000);
	cout << "��������� � ���������� � ������.";
	cout << "���������: " << dkm << endl;
	cout << "�����" << dM << endl;
	system("pause>nul");
	return 0;
}