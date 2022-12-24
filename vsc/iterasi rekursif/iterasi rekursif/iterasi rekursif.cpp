#include <iostream>
using namespace std;

int deretiterasi(int n);
int deretrekursi(int n);


int main() {
    int num,i=0;
    cout << "Masukkan jumlah angka pada deret bilangan yang dikendaki : ";
    cin >> num;
    cout << endl;

    cout << "\nDeret Rekursi: ";
        while (i < num) {
            cout << " " << deretrekursi(i); i++;
        }
    cout << endl;


    cout << "\nDeret Iterasi: ";
    deretiterasi(num);
    return 0; 
}


int deretiterasi(int n) {
    int x = 2;
    for (int i = 0; i < n; i++) {
        
        cout << x << " ";

        x = x + 5;
    }
    return 0;
}

int deretrekursi(int n) {
    if (n == 0) {
        return (2);
    }
    else {
        return (deretrekursi(n - 1) + 5);
    }
}