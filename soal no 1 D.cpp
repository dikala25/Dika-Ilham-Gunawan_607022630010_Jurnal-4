#include <iostream>
#include <string>
using namespace std ;

int main () {
	string tujuan ;
	int berat ;
	
	cout <<"Masukan tujuan anda (Jawa/Luar Jawa) : " ; cin >> tujuan ;
	cout <<"Masukan berat barang : Kg " ; cin >> berat ;
	
	if (tujuan == "jawa"|| tujuan == "Jawa") {
		if (berat <= 5) {
			cout <<"biaya angkut barang : Rp20.000" << endl ;
		} else {
			cout <<"biaya angkut barang : Rp50.000" << endl ;
		}
	} else if (tujuan == "luar_jawa" || tujuan == "Luar_jawa") {
		if (berat <= 5) {
			cout <<"biaya angkut barang : Rp50.000" << endl ;
		} else {
			cout <<"biaya angkut barang : Rp100.000" << endl ;
		}
	} else {
		cout <<"tujuan tidak valid" ;
	}
	return 0 ;
}
