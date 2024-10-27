#include <iostream>
#include <cmath>
using namespace std;
int main() {
	// онстанта - ускорение свободного падени€ и число пи
	const double g = 9.8;
	const double pi = 3.1415;
	//Ќачальные и расчетные параметры задачи
    // (скорость, угол и врем€ полета):
	double v, alpha, T=0.0;
	// ћомент времени и координаты:
	double t, x, y;
	// ¬вод параметров:
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