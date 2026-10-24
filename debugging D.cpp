#include <iostream>
using namespace std ;

int main () {
	int suhu ;
	bool air_coolant = false;
	
	cout <<"Masukan suhu : " ; cin >> suhu ;
	
if (suhu > 70) {
	if (air_coolant == true) {
		cout <<"Aman" ;
	} else {
		cout <<"Bahaya overhit" ;
	} 
} else {
	cout << "Aman" ;
}
return 0 ;
}
    
