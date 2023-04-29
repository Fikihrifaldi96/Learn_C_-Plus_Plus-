#include <iostream>
using namespace std;

int main (){
int Kurang,Kali,Modulus,hasil1,hasil2,hasil4,hasil5;
float Tambah,Bagi,hasil3;
cout << " Program Aritmatika : " << endl;
cout << " Masukan Nilai Tambah : " ;
cin >> Tambah;
cout << " Masukan Nilai Kurang : " ;
cin >> Kurang;
cout << " Masukan Nilai Bagi : " ;
cin >> Bagi;
cout << " Masukan Nilai Kali : " ;
cin >> Kali;
cout << " Masukan Nilai Modulus : " ;
cin >> Modulus;
cout<<endl;
hasil1=Tambah+Kurang;
cout << " Hasil1 = " << hasil1 << endl;
hasil2=Tambah-Kurang;
cout << " Hasil2 = " << hasil2 << endl;
hasil3=Tambah/Bagi;
cout << " Hasil3 = " << hasil3 << endl;
hasil4=Tambah*Kali;
cout << " Hasil4 = " << hasil4 << endl;
hasil5=Kali%Modulus;
cout << " Hasil5 = " << hasil5 << endl;


}