#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double g = 9.8;
	//������
	double h = 78.4;
	//����������, �������� ������������� ����� � ����������
	double T=0.0, t=0.0, x=0.0;
	//���-�� ������������
	int n = 0.0;
	//���� ������������� ������� �������
	cout << "enter t = ";
	cin >> t;
	T = sqrt(2 * h / g);
	n = (int)t / T;
	t = n % 2 ? T - (t - n * T) : t - n * T;
	x = h - g * t * t / 2;
	cout << "x = " << x << "m" <<endl;
	return 0;
}