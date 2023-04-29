#include <iostream>
using namespace std;

int main (){
int choose;
float sisi,panjang,lebar,tinggi,jari_jari,Luas_alas,Alas_segitiga,tinggi_alas_sgt;
float volumekubus,volumebalok,volumetabung,volumekerucut,volumelimas;
float pi=3.14;

do{
cout << " MENU DAFTAR PILIHAN MENGHITUNG VOLUME 5 BANGUN " << endl;
cout << " 1. Volume Kubus " << endl;
cout << " 2. Volume Balok " << endl;
cout << " 3. Volume Tabung " << endl;
cout << " 4. Volume Kerucut " << endl;
cout << " 5. Volume Limas Segitiga " << endl;
cout << " 6. KELUAR DARI PROGRAM " << endl;
cout << " Whats your Choice ? : ";
cin >> choose;

switch ( choose ){
case 1 :
cout << " 1. Volume Kubus : " << endl;
cout << " Masukan Nilai Sisi : " ;
cin>> sisi;
volumekubus = sisi * sisi * sisi ;
cout << " Hasil Volume Kubus = " << volumekubus << endl;
cout << endl;
break;

case 2 :
cout << " 2. Volume Balok : " << endl;
cout << " Masukan Nilai Panjang : " ;
cin>> panjang;
cout << " Masukan Nilai Lebar : " ;
cin>> lebar;
cout << " Masukan Nilai Tinggi : " ;
cin>> tinggi ;
volumebalok = panjang * lebar * tinggi ;
cout << " Hasil Volume Balok = " << volumebalok << endl;
cout << endl;
break;

case 3 :
cout << " 3. Volume Tabung : " << endl;
cout << " Masukan Nilai Jari-Jari : " ;
cin>> jari_jari;
cout << " Masukan Nilai Tinggi : " ;
cin>> tinggi;
volumetabung = pi * jari_jari * jari_jari * tinggi;
cout << " Hasil Volume Tabung = " << volumetabung << endl;
cout << endl;
break;

case 4 :
cout << " 4. Volume Kerucut : " << endl;
cout << " Masukan Nilai Jari-Jari : " ;
cin>> jari_jari;
cout << " Masukan Nilai Tinggi : " ;
cin>> tinggi;
volumekerucut = ( pi * jari_jari * jari_jari * tinggi ) /3 ;
cout << " Hasil Volume Kerucut = " << volumekerucut << endl;
cout << endl;
break;

case 5 :
cout << " 5. Volume Limas Segitiga : " << endl;
cout << " Masukan Nilai Alas segitiga : " ;
cin>> Alas_segitiga;
cout << " Masukan Nilai tinggi alas segitiga : " ;
cin>> tinggi_alas_sgt;
cout << " Masukan Nilai Tinggi : " ;
cin>> tinggi;
Luas_alas = (Alas_segitiga * tinggi_alas_sgt ) /2;
volumelimas =  ( Luas_alas * tinggi ) / 3 ;
cout << " Luas Alasnya = " << Luas_alas << endl;
cout << " Hasil Volume Limas segitiga = " << volumelimas << endl;
cout << endl;
break;

case 6 :
cout << " 6. SUDAH KELUAR DARI PROGRAM " << endl;
return 0;

case 7 :
continue; // Looping Ke awal Program

default :
cout << " Pilihan anda salah " << endl;
}
}
while ( choose != 7 );
}
