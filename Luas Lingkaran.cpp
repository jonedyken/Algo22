#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int harga, jumlah, total;
    
    cout << "masukkan harga" << endl;
    cin >> harga;
    cout << "masukkan jumlah" << endl;
    cin >> jumlah;
    total = harga * jumlah;
    if (total > 1000000) {
        cout << "Bonus Yang Kamu Dapat: " << total << "   Selamat Anda Mendapatkan Payung Cantik" << endl;
    } else {
        cout << "Terima kasih" << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

