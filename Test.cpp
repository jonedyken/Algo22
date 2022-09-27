#include <iostream>
using namespace std;

int main() {
	int a;
	
	cout <<"Masukkan Angka : ";
	cin>>a;
	
	if(a%2==0) {
		cout<<a<<" termasuk bilangan genap "<<endl;
	}else{
		cout<<a<<" termasuk bilangan ganjil "<<endl;
	}
	return 0;
}
