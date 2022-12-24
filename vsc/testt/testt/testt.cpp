#include <iostream>
using namespace std;

int main() {
	double a, b, hasil;
	char aritmatika;

	cout << "masukkan nilai pertama = " << endl;
	cin >> a;
	cout << "pilih operasi +, -, *, / = ";
	cin >> aritmatika;
	cout << "masukkan nilai kedua = " << endl;
	cin >> b;

	switch (aritmatika) {
	case '+':
		hasil = a + b;
		break;
	case '-':
		hasil = a - b;
		break;
	case '*':
		hasil = a * b;
		break;
	case '/':
		hasil = a / b;
		break;
	default:
		cout << "itung sendiri" << endl;

	}
	cout << a << aritmatika << b << "=" << hasil;
	return 0;

}