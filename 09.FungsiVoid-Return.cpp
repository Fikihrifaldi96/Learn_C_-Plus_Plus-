#include <iostream>
using namespace std;
/* Fungsi Void
void Perkalian ( int a,int b){
   int Hasil = a* b;
cout << " Hasil Perkalian a*b : "<< Hasil << endl; 
}*/
// Fungsi Return
int Perkalian (int a,int b){
return a * b;
}

int main (){
int a,b;
cout << " Masukan Nilai A : " ;
cin >> a ;
cout << " Masukan Nilai B : " ;
cin >> b ;

int Hasil = Perkalian(a,b);
cout << " Hasil Perkalian a*b : "<< Hasil << endl;

}