#include <iostream>
using namespace std;

int main (){
int i;
cout << " Masukan Nilai i : ";
cin >> i;

do {
    i++;
   
if ( i == 20 ){
    break;
}
 if ( i == 20 ){
        continue;
    }
cout << " Looping " << endl;
cout << i << endl;
}
while ( i < 100 );

/*
while ( i <20 ) {
cout << " Burung " << endl;
cout << i << endl;
i++;
if ( i == 10 ){
   continue;
}
if ( i == 15 ){
    break;
}
}


for ( int i = 1; i < 100 ; i++ ){
if ( i == 20){
    break;
}
cout << " Break 1 " << endl;
cout << i << endl;
}
for ( i = 1; i <=100 ; i++){
    if ( i == 20 ){
        continue;
    }
    cout << " Continue " << endl;
    cout << i << endl;
}
*/
}