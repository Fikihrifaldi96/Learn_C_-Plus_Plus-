#include <iostream>
using namespace std;

int main (){
// Fungsi IF
string Data;
cout << " Masukan Kata : " ;
cin >> Data;
/*
if ( Data == "y"  ){
cout << " Anda dapat uang gratis " << endl;
} 
if ( Data == "1" ){
cout << " Selamat malam " << endl;
} 
else {
cout << " Maaf ini sudah siang " << endl;
}
*/
if ( Data == "12"  ){
cout << " Anda benar silahkan dilanjut " <<endl;
}
else if ( Data == "11" ){
cout << " Maaf sedikit lagi benar, COBA LAGI YAH " << endl;
}
else if ( Data == "10" ){
cout << " Yah ,Malah menjauh " << endl;
}
else {
cout << " Dahlah , Lo gue end" << endl;
}
}