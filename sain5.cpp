#include<iostream>
using namespace std;
int main() {
	//������� ������� ����� � �������� �����
	int n, s = 0;
	//���� �������� ��� ������� ������� ����
	cout << "verkhnaya granizha summ: ";
	cin >> n;
	//���� ������� ������������� �����
	if (n > 0) {
		//��������� ����� ��� ���������� �����
		while (n) {
			//��������� ����� ��������� � �����
			s += n * n;
			//������ �������� ����������
			n--;
		}
		//�����
		cout << "summa kvadratov: " << s << endl;
	}
	//����� ������
	else
	{
		cout << "error";
	}
	system("pause>nul");
	return 0;
}