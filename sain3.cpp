#include <iostream>
#include<cstdlib>

using namespace std;

double getDistMile() {
	double dist;
	cout << "mile";
	cin >> dist;
	return dist;
}

double getDistMile(double dist) {
	double kmInMile - 1.6;
	return kmInMile * dist;
}

int main() {
	system("chcp 1251>nul");
	double distMile = getDistMile();
	cout << "растояние (в км): " << getDistkm(distMile) << endl;
	system("pause>nul");
	return 0;
}