#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

main(){
    cout<< "Tipe-Tipe Data Fundamental : " <<endl;
char a='Z';//Karakter

//Bilangan Bulat
int b=7;
short c=7;
long d=7;

//Bilangan Desimal
float e=7;
double f=7.5;
bool g = false; // True&Flase

cout << "Karakter : " << a << endl;
cout << sizeof(b) << endl;

cout << " Bilangan Bulat " <<endl;
cout << " Integer MIN&MAX : " << endl;
cout << INT_MIN << endl;
cout << INT_MAX << endl;
cout << UINT_MAX << endl;
cout <<endl;
cout << " SHORT MIN&MAX : " << endl;
cout << SHRT_MIN << endl;
cout << SHRT_MAX << endl;
cout << USHRT_MAX << endl;
cout <<endl;
cout << " LONG MIN&MAX : " << endl;
cout << LONG_MIN << endl;
cout << LONG_MAX << endl;
cout << ULONG_MAX << endl;
cout <<endl;
cout << " Bilangan DESIMAL " <<endl;
cout << " FLOAT MIN&MAX : " << endl;
cout <<endl;
cout << FLT_MIN << endl;
cout << FLT_MAX << endl;
cout <<endl;
cout << " DOUBLE MIN&MAX : " << endl;
cout << DBL_MIN << endl;
cout << DBL_MAX << endl;




}