#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int s, result;
    cout << "введите число приделении на 4 в остатке остается 3" << endl;
    cout << "ваше число: ";
    cin >> s;
    if (s % 4 == 3) {
        cout << "вася ты победил";
    }
    else
    {
        cout << "тупой баран считать не уммешь";
    }
    return 0;
}