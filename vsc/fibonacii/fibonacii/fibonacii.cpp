#include <iostream>

using namespace std;

int main() {

	int n, f_n, f_n1, f_n2;

	cout << "masukkan deret fibonaci";
	cin >> n;

	f_n1 = 0;
	f_n2 = 1;
	f_n = f_n1 + f_n2;
	
	for (int i = 1; i <= n; i++) {
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";

	}
	return 0;
}



