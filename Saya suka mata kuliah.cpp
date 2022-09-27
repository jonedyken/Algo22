#include <iostream>
using namespace std;
int main ()
{
	string nama,prodi,nama_matakuliah,umur;
	
	cout<<"Masukkan Nama Anda  :";cin>>nama;
	cout<<"Masukkan Umur Anda  :";cin>>umur;
	cout<<"Masukkan Prodi Anda   :";cin>>prodi;
	cout<<"Nama mata kuliah yang anda sukai  :";cin>>nama_matakuliah;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"Saya "<<nama<<",umur "<<umur<<" dari prodi "<<prodi<<" dengan ini menyatakan: suka sekali dengan mata kuliah "<<nama_matakuliah;
	return 0;
}
