/*
&& // And
|| // Or
! // Not
*/
#include <iostream>
using namespace std;
int main (){
/* Operator Logika && - And
Terbang = Burung && Burung ;
cout << " Hasil Burung && Burung : " << Terbang <<endl;
Terbang  = Burung && Rajawali;
cout << " Hasil Burung && Rajawali : " << Terbang <<endl;
cout << endl;
// Operator Logika || - Or
Terbang = Burung || Burung ;
cout << " Hasil Burung || Burung : " << Terbang <<endl;
Terbang  = Burung || Rajawali;
cout << " Hasil Burung || Rajawali : " << Terbang <<endl;
cout << endl;
// Operator Logika ! - Not
Terbang =  !Burung ;
cout << " Bool Not Burung : " << Terbang <<endl;
Terbang  = !Rajawali;
cout << " Bool Not Rajawali : " << Terbang <<endl;
*/
bool Burung=true;
bool Rajawali=false;
bool Terbang;

Terbang = ( Burung && Rajawali ) || ( Rajawali && Burung );
cout << " Bool A :" << Terbang << endl;
cout <<endl;
Terbang = ( Rajawali || Burung ) && ( Burung || Rajawali );
cout << " Bool B : " << Terbang <<endl;
cout <<endl;
Terbang = !Burung || ( Rajawali || Rajawali );
cout << " Bool C : " << Terbang <<endl;







}