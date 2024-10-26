#include <iostream>
using namespace std;
int main () {
    int n, m, i = 3, j = 3;
    cout    <<  "At the beginning:\n";
    cout    <<  "i=" << i << "\n";
    cout << "j=" << j << "\n";
    cout << "After command n=i++ :\n";
    n = i++;
    cout << "n=" << n << "\n";
    cout << "i=" << i << "\n";
    cout << "After command m=++j :\n";
    m = ++j;
    cout << "m=" << m << "\n";
    cout << "j=" << j << "\n";
    cout << "After command n=(--i)*(i--) :\n";
    n = (--i) * (i--);
    cout << "n=" << n << "\n";
    cout << "i" << i << "\n";
    cout << "After command m=(--j)*(--j) :\n";
    m = (--j) * (--j);
    cout << "m=" << m << "\n";
    cout << "j=" << j << "\n";
    cout << "After command n=(--i) * (i++) :\n";
    n = (--i) * (i++);
    cout << "n=" << n << "\n";
    cout << "i=" << i << "\n";
    cout << "after command m= (j--)*(++j) :\n";
    m = (j--) * (++j);
    cout << "m=" << m << "\n";
    cout << "j=" << j << "\n";
    cout << "After command n=(--i)*(++i) :\n";
    n = (--i) * (++i);
    cout << "n=" << n << "\n";
    cout << "i=" << i << "\n";
    return 0;
}