#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Функция вычисления arctg(x) через разложение в степенной ряд для заданного числа членов
double arctan_series_N(double x, int N) {
    double sum = 0;
    for (int n = 0; n < N; ++n) {
        double term = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
        sum += term;
    }
    return sum;
}

// Функция вычисления arctg(x) с заданной точностью
double arctan_series_eps(double x, double eps) {
    double sum = 0;
    double term;
    int n = 0;
    do {
        term = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
        sum += term;
        n++;
    } while (fabs(term) > eps);
    return sum;
}

int main() {
    setlocale(LC_ALL, "Ru");

    double a, b, eps;
    int N;

    // Ввод значений
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите N: ";
    cin >> N;
    cout << "Введите eps: ";
    cin >> eps;

    double h = (b - a) / 10.0;

    cout << "----------------------------------------------------\n";
    cout << "|   x   |  Sn (N)  |  Se (eps)  |   arctg(x)  |\n";
    cout << "----------------------------------------------------\n";

    for (double x = a; x <= b; x += h) {
        double Sn = arctan_series_N(x, N);
        double Se = arctan_series_eps(x, eps);
        double exact = atan(x);

        cout << "| " << fixed << setprecision(6) << x << " | "
            << Sn << " | " << Se << " | " << exact << " |\n";
    }
    cout << "----------------------------------------------------\n";

    return 0;
}
