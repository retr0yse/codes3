#include<iostream>
using namespace std;
int main() {
	//верхн€€ граница суммы и значение суммы
	int n, s = 0;
	//ввод значение дл€ верхней границы р€да
	cout << "verkhnaya granizha summ: ";
	cin >> n;
	//усли введено положительное число
	if (n > 0) {
		//опрератор цикла дл€ вычисление суммы
		while (n) {
			//добавлено новое слагаемое к сумме
			s += n * n;
			//умение значени€ переменной
			n--;
		}
		//вывод
		cout << "summa kvadratov: " << s << endl;
	}
	//иначе ошибка
	else
	{
		cout << "error";
	}
	system("pause>nul");
	return 0;
}