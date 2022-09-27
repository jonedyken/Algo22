#include <iostream>
using namespace std;

	int main(){
		int pil;
		float a,b,c;
		cout<<"Kalkulator Canggih"<<endl;
		cout<<"Penjumlahan"<<endl;
		cout<<"Pengurangan"<<endl;
		cout<<"Perkalian"<<endl;
		cout<<"Pembagian"<<endl;
		cout<<"Modulus"<<endl;
		cout<<"------------------"<<endl;
		cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
		switch (pil){
			case 1: cout<<"Masukkan angka pertama: ";cin>>a;
			cout<<"Masukkan angka kedua: ";cin>>b;
			c = a + b;
			cout<<"Hasil Penjumlahan: "<<c<<endl;
			break;
			case 2: cout<<"Masukkan angka pertama: ";cin>>a;
			cout<<"Masukkan angka kedua: ";cin>>b;
			c = a + b;
			cout<<"Hasil Penjumlahan: "<<c<<endl;
			case 3: cout<<"Masukkan angka pertama: ";cin>>a;
			cout<<"Masukkan angka kedua: ";cin>>b;
			c = a + b;
			cout<<"Hasil Penjumlahan: "<<c<<endl;
			case 4: cout<<"Masukkan angka pertama: ";cin>>a;
			cout<<"Masukkan angka kedua: ";cin>>b;
			c = a + b;
			cout<<"Hasil Penjumlahan: "<<c<<endl;
			case 5: cout<<"Masukkan angka pertama: ";cin>>a;
			cout<<"Masukkan angka kedua: ";cin>>b;
			c = a + b;
			cout<<"Hasil Penjumlahan: "<<c<<endl;
			default: cout<<"Masih tahap pengembangan. pilih 1 atau 2"<<endl;
			break;
		}
	}
