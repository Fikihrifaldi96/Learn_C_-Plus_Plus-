#include <iostream>
using namespace std;

int main(){
char Point;
cout << " Latihan Switch case " << endl;
cout << " Enter Point 1-4 : " ;
cin >> Point;

switch ( Point ){
case '1' :
cout << " Beli Mobil Baru "<< endl;
case '2' :
cout << " Beli Rumah BARU " << endl;
break;
case '3' :
cout << " Beli MOTOR " << endl;
break;
case '4' :
cout << " Yah,Gak beli apa apa " << endl;
break;
default :
cout << " Gak ada pilihan lain bang ? " << endl;
}
}