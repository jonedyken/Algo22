#include <iostream>
using namespace std;

	int main(){
		int jeniskamar,harga,lamainap,totalkamar,total,totalsarapan;
		string nama;
		char kamar,sarapan,tidaksarapan;
		
		cout<<"WELCOME TO BAHAGIA HOTEL"<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"Pilihan Jenis Kamar:   "<<endl;
		cout<<"1. VVIP	        = Rp.1.000.000,00"<<endl;
		cout<<"2. VIP 	        = Rp.750.000,00  "<<endl;
		cout<<"3. Standard	= Rp.500.000,00  "<<endl;
		cout<<"4. Melati	= Rp.250.000,00  "<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"Masukkan nama anda:   ";cin>>nama;
		cout<<"Kamar yang anda pilih(1-4):  ";cin>>jeniskamar;
		switch (jeniskamar){
		    case 1 :cout<<"VVIP";harga=1000000;break;
			case 2 :cout<<"VIP";harga=750000;break;
			case 3 :cout<<"Standard";harga=500000;break;
			case 4 :cout<<"Melati";harga=250000;break;
		}
		
		cout<<"Lama menginap:  ";cin>>lamainap;
		cout<<"Dengan sarapan (y/n) (Rp.50.000,00/hari):  ";cin>>sarapan;
		cout<<"--------------------------------"<<endl;
		
		if (kamar == '1') {
			totalkamar = 1000000 * lamainap;
		} else if (kamar == '2') {
			totalkamar = 750000 * lamainap;
		} else if (kamar == '3') {
			totalkamar = 500000 * lamainap;
		} else if (kamar == '4') {
			totalkamar = 250000 * lamainap;
		}
		
		if (sarapan == 'y'){
			totalsarapan = 50000 * lamainap;
		}else{
			totalsarapan = 0;
	}
		
		total = totalkamar + totalsarapan;

		cout<<"Terima kasih ";cout<<nama<<endl;
		cout<<"Kamar anda ";cout<<jeniskamar<<endl;
		cout<<"Lama menginap ";cout<<lamainap;
		cout<<" malam dengan ";
		if (sarapan == 'y'|| tidaksarapan == 'n'){
		    cout<<"sarapan"<<endl;
			} else {
			cout<<"tidak sarapan"<<endl;
			}
		cout<<"Total yang harus dibayarkan:  "<<total;
		cout<<endl;
		cout<<"--------------------------------"<<endl;
		return 0;
		}
