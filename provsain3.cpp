#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int s, result;
    cout << "������� ����� ���������� �� 4 � ������� �������� 3" << endl;
    cout << "���� �����: ";
    cin >> s;
    if (s % 4 == 3) {
        cout << "���� �� �������";
    }
    else
    {
        cout << "����� ����� ������� �� ������";
    }
    return 0;
}