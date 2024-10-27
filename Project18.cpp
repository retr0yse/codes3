#include<iostream>
using namespace std;
int main() {
	//Число, показатель степени и результат
	int number=0, n=0, result=0;
	//Ввод числа пользователем
	cout << "Enter number =";
	cin >> number;
	//Ввод пользователем показателя степени
	cout << "Enter n = ";
	cin >> n;
	//Результат умножения
	result = number << n;
	cout << "result = " << result << endl;
	return 0;
}