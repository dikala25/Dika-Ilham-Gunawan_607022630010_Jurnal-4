#include <iostream>
using namespace std ;

int main () {
	string hari ;
	int harga_dasar = 40000 ;
	int umur ;
	
	cout <<"Masukan hari : " ; cin >> hari ;
	cout <<"Masukan umur pelanggan : " ; cin >> umur ;
	
	if (hari == "weekend" || hari == "Weekend") {
		if (umur <= 12) {
			int harga_total = harga_dasar + 10000 ;
			cout <<"Total pembayaran : Rp" << harga_total << endl ;
		} else {
			int harga_total = harga_dasar + 20000 ;
			cout <<"Total pembayaran : Rp" << harga_total << endl ; 
		}		
	} else {
		cout <<"Total Pembayaran : Rp" << harga_dasar << endl ;
	}
	return 0 ;
}
