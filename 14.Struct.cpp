# include <iostream>
using namespace std;

struct leon {
char namabinatang[10];
int umurbinatang;
string habitat;
};

int main ( ){
leon hutan;
cout << " Masukan Nama binatangnya : ";
cin >> hutan.namabinatang;
cout << " Masukan Umur binatangnya : ";
cin >> hutan.umurbinatang;
cout << " Masukan Habitatnya : ";
cin >> hutan.habitat;
cout << endl;
cout << " DAFTAR DATA BINATANG " << endl;
cout << " Nama Binatangnya : " << hutan.namabinatang << endl;
cout << " Umur Binatangnya : " << hutan.umurbinatang << " Tahun " << endl;
cout << " Habitatnya : " << hutan.habitat << endl ;

}