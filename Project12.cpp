#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//��������� - ��������� ���������� ������� � ����� ��
	const double g = 9.8;
	const double pi = 3.1415;
	//��������� � ��������� ��������� ������
    // (��������, ���� � ����� ������):
	double v, alpha, T=0.0;
	// ������ ������� � ����������:
	double t, x, y;
	// ���� ����������:
	cout << "Enter speed v= ";
	cin >> v;
	cout << "Enter Angel alpha = ";
	cin >> alpha;
	alpha = alpha * pi / 180;
	t = 2 * v * sin(alpha) / g;
	cout << "Enter time t<" << t << ": ";
	cin >> t;
	x = v * t * cos(alpha);
	y = v * t * sin(alpha) - g * t * t / 2;
	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
	return 0;
}