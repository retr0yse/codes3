#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    double N = 20;
    double a = 4;
    double Xstart = 1;
    double Xend = 10;
    int method;


    double h = (Xend - Xstart) / (N - 1); 
    double x;


    while (true) {
        cout << "Выберите метод  (1 - while, 2 - do...while, 3 - for): ";
        cin >> method;
        if (cin.fail()) {
            cout << "Ошибка: введите целое число." << endl;
            cin.clear();
            cin.ignore();
        }
        else if (method >= 1 && method <= 3) {
            break;
        }
        else {
            cout << "Пожалуйста, введите 1, 2 или 3." << endl;
        }
    }


    ofstream out("out.txt");


    cout << fixed << setprecision(6);
    out << fixed << setprecision(6);


    cout << "-------------------------" << endl;
    cout << "|     x     |      y     |" << endl;
    cout << "-------------------------" << endl;


    out << "--------------------------" << endl;
    out << "|     x     |      y      |" << endl;
    out << "--------------------------" << endl;


    if (method == 1) { // while
        x = Xstart;
        while (x <= Xend) {
            double T = (a + 30) / (a + sqrt(a * x));
            double y = pow(T, 1.0 / 5.0);
            cout << "| " << setw(9) << x << " | " << setw(10) << y << " |" << endl;
            out << "| " << setw(9) << x << " | " << setw(10) << y << "  |" << endl;
            x += h;
        }
    }
    else if (method == 2) { // do...while
        x = Xstart;
        do {
            double T = (a + 30) / (a + sqrt(a * x));
            double y = pow(T, 1.0 / 5.0);
            cout << "| " << setw(9) << x << " | " << setw(10) << y << " |" << endl;
            out << "| " << setw(9) << x << " | " << setw(10) << y << "  |" << endl;
            x += h;
        } while (x <= Xend);
    }
    else if (method == 3) { // for
        for (x = Xstart; x <= Xend; x += h) {
            double T = (a + 30) / (a + sqrt(a * x));
            double y = pow(T, 1.0 / 5.0);
            cout << "| " << setw(9) << x << " | " << setw(10) << y << " |" << endl;
            out << "| " << setw(9) << x << " | " << setw(10) << y << "  |" << endl;
        }
    }


    system("pause>nul");
    return 0;
}

