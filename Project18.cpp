#include<iostream>
using namespace std;
int main() {
	//�����, ���������� ������� � ���������
	int number=0, n=0, result=0;
	//���� ����� �������������
	cout << "Enter number =";
	cin >> number;
	//���� ������������� ���������� �������
	cout << "Enter n = ";
	cin >> n;
	//��������� ���������
	result = number << n;
	cout << "result = " << result << endl;
	return 0;
}