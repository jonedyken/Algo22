#include <iostream>
using namespace std;

	int main(){
	string nb,np;
	double hb,total;
	int jb;
	
		cout<<"Masukkan Nama Pelanggan :";cin>>np;
		cout<<"Masukkan Nama Barang   :";cin>>nb;
		cout<<"Masukkan Harga Barang   :";cin>>hb;
		cout<<"Masukkan Jumlah Beli   :";cin>>jb;
		cout<<"--------------------------------"<<endl;
		cout<<"Barang yang anda beli adalah  "<<nb;
		cout<<"Dengan Harga "<<hb<<endl;
		total = hb * jb;
		(total > 500000) ? (cout<<"bonus: Payung"<<endl) :
			(cout<<"bonus: TerimaKasih"<<endl);
		
		
	
		
	}
