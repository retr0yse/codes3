#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <limits>

using namespace std;

ofstream out("out.txt");

void printValue(double value)
{
    const double LARGE_VALUE_THRESHOLD = 1e6; 

    if (std::isnan(value) || std::abs(value) > LARGE_VALUE_THRESHOLD)
    {
        cout << "*\t"; 
        out << "*\t";
    }
    else {
        cout << fixed << setprecision(2) << value << '\t';
        out << fixed << setprecision(2) << value << '\t';
    }
}

int main() 
{
    setlocale(LC_ALL, "Ru");
    double a = -1.0;
    double b = 1.0;
    double c = -1.0;
    double d = 1.0;
    double Xdelta = 0.2;
    double Ydelta = 0.2;
    double x = a;
    double y = c;
    double xl = a;
    double yl = c;


    cout << fixed << setprecision(1);
    out << fixed << setprecision(1);
    cout << " Y \\ x  |";
    out << " Y \\ x  |";

    while (xl <= b)
    {
        cout << xl << "\t";
        out << xl << "\t";
        xl += Xdelta;
    }

    cout << endl << "_________________________________________________________________________________________________";
    cout << endl;
    out << endl << "_________________________________________________________________________________________________";
    out << endl;

    while (yl <= d)
    {
        cout << yl << "\t|";
        out << yl << "\t|";
        x = a;

        while (x <= b)
        {
            if (x == 0.0) {
                cout << "*\t";
                out << "*\t";
            }
            else if (x + yl > 1 || x + yl < -1)
            {
                cout << "*\t";
                out << "*\t";
            }
            else if (x * yl == 0.0)
            {
                cout << "*\t";
                out << "*\t";
            }

            else
            {
                double result = asin(x + yl) / (x * yl);
                printValue(result); 
            }

            x += Xdelta;
        }
        yl += Ydelta;
        cout << endl; 
        out << endl;
    }
    system("pause>nul");
    return 0;
}

