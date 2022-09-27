#include <iostream>
using namespace std;

	int main(){
		int j,li,bk,bs; 
		char sr;
		string km,nm; int h;
		cout<<"1.VVIP (1.000.000)"<<endl;
		cout<<"2.VIP (750.000)"<<endl;
		cout<<"3.Standart (500.000)"<<endl;
		cout<<"4.Melati (250.000)"<<endl;
		cout<<"------------------------"<<endl;
		cout<<"Masukkan nama anda:  ";cin>>nm;
		cout<<"Input jenis kamar(1-4):  ";cin>>j;
		cout<<"Lama inap:  ";cin>>li;
		cout<<"Dengan sarapan (y/n) 50rb/hari:  ";cin>>sr;
		bk=km*li;
		
		if (sr == 'y'|| sr == 'Y'){
			bs=li*50;
		}
		h=bk*bs;
		switch (j){
			case 1 : km="VVIP";h=1000000;break;
			case 2 : km="VIP";h=750000;break;
			case 3 : km="Standart";h=500000;break;
			case 4 : km="Melati";h=250000;break;
		}
		cout<<"Kamar:   "<<km<<endl;
		cout<<"Harga:   "<<h<<endl;
	}
