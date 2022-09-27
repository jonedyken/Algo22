#include <iostream>
using namespace std;

	int main(){
		int a;
		cout<<"nilai a: "; cin>>a;
		if (a>=1 && a<=5){
			cout<<"1 - 5"<<endl;
		} else if (a>=6 && a<=10){
			cout<<"6 - 10"<<endl;
		} else {
			cout<<"Bukan Keduanya";
		}	
	}
