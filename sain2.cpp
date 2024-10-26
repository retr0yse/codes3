#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	system("chcp 1251>nul");
	const int ftInMile = 5280;
	const double kmInMile = 1.6;
	int dMile, dFt, dKm, dM;
	cout << "Растояние в милях и футах." << endl;
	cout << "Мили: ";
	cin << dMile;
	cout << "футы: ";
	cin << dFt;
	double distMile = dMile + (double)dFt / ftInMile;
	double distKm = distMile * kmInMile;
	dKm = (int)distKm;
	dM = (int)((distKm - dKm) * 1000);
	cout << "Растояние в километрах и метрах.";
	cout << "Километры: " << dkm << endl;
	cout << "Метры" << dM << endl;
	system("pause>nul");
	return 0;
}