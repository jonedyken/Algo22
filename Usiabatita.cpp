#include <iostream>
using namespace std;

	int main(){
		int u; cout<<"Input Umur:  ";cin>>u;
		string st,pr;
		switch (u){
			case 1 ... 3: st="A";
			pr="Sangat baik";
			break;
			case 4 ... 5: st="B";
			pr="Baik";
			break;
		}
		cout<<st<<endl<<pr<<endl;
	}
