#include <iostream>
using namespace std;

int main() {

	int i;
	int angka[] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Diketahui deret integer: " << endl;
	
	for (i = 0; i <= 10; i++) {
		cout << angka[i] << " ";
	}

	cout << "\nBilangan ganjil pada deret tersebut adalah: " << endl;


	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {

			cout << i << " ";
		}
	}
	return 0;
}