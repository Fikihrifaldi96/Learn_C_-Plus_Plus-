#include <iostream>
using namespace std;
int prototype ( int z , int x );
 int main (){
    int z,x;
    int Hasil;
    //bool Nilai;
    cout << " Masukan Nilai z : ";
    cin >> z;
    cout << " Masukan Nilai x : ";
    cin >> x;
    cout << " CONTOH PROTOTYPE " << endl;
   for ( int i = 0 ; i <= 10 ; i++){
    cout << " Hasil Dari = " << z << " * " << x << " = " << Hasil << endl;
   }
 }
int prototype ( int z, int x ){
   return z * x;
}
    /*
// == SAMA DENGAN
Nilai = ( z == x );
cout << " Hasil dari == " << Nilai << endl;

// != TIDAK SAMA DENGAN
Nilai = ( z != x );
cout << " Hasil dari != " << Nilai << endl;

// > LEBIH DARI
Nilai = ( z > x );
cout << " Hasil dari > " << Nilai << endl;

// < KURANG DARI a < 10 = SAMPE 9
Nilai = ( z < x );
cout << " Hasil dari < " << Nilai << endl;

// >= LEBIH DARI SAMA DENGAN
Nilai = ( z >= x );
cout << " Hasil dari >= " << Nilai << endl;

// <= KURANG DARI SAMA DENGAN a <= 10 = SAMPE 10
Nilai = ( z <= x );
cout << " Hasil dari <= " << Nilai << endl;
*/