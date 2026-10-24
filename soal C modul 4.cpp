#include <iostream>
using namespace std;

int main () {
    float ipk ;
    long penghasilan ;
    
    cout <<"Masukan ipk anda : " ; cin >> ipk ;
    cout <<"Masukan penghsilan anda : " ; cin >> penghasilan ;

    if (ipk >= 3.5) {
        if (penghasilan <= 3000000) {
            cout <<"Selamat, Anda mendapatkan beasiswa!" << endl;
        } else {
            cout <<"Lolos beasiswa Parsial" << endl;
        }
    } else {
        cout <<"Maaf, Anda tidak memenuhi syarat beasiswa" << endl;
    }
    return 0;
}
