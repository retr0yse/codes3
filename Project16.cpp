#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//�������������� � ������ �����;
	double x=0.0, y=0.0, X=0.0, Y=0.0;
	//������ � ��������
	double r=0.0, phi=0.0, R=0.0, Phi=0.0;
	//���������� �������
	int n=0.0;
	//���� ����������
	cout << "Real part x = ";
	cin >> x;
	cout << "Imaginary part y = ";
	cin >> y;
	cout << "Power n = ";
	cin >> n;
	//���������� ����������
	phi = atan2(y, x);
	r = sqrt(x * x + y * y);
	R = pow(r, n);
	Phi = n * phi;
	X = R * cos(Phi);
	Y = R * sin(Phi);
	cout << "The result is:\n";
	cout << "Re-part" " " << X << " " "\n";
	cout << "Im-part" " " << Y << " " "\n";
		return 0;
}