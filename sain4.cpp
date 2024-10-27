#include<iostream>

using namespace std;

int main() {
	int n = 10, s = 0, k = 1;
	while (k <= n) {
		s = s + k;
		k++;
	}
	cout << "summa kvadratov ot 1 do " << n << ": " << s << endl;
	system("pause>nul");
	return 0;
}