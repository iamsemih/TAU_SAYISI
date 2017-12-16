#include <iostream>
using namespace std;
// TAU SAYISI: Pozitif bolenlerinin sayisi da o sayiyi tam olarak boluyorsa tau sayisidir
// SEMIH SAHIN

bool tau(int x);

int main(){
	// 1 - 1000 arasindaki tau sayilarini bulup ekrana yazdiran program
	unsigned int sayac=1;
	bool tauMu=false;
	cout << "1 - 1000 arasi tau sayilari:\n";
	do{
		tauMu=tau(sayac);
		if (tauMu==true){
			cout << sayac << endl;
		}
		sayac++;
	} while (sayac<=1000);
	cout << "\n\n\n";
	system("pause");
	return 0;
}

bool tau(int x){
	unsigned int pbAdedi=0;
	for (int i=1; i<=x; i++){
		if (x%i==0){
			pbAdedi++;
		}
	}
	if (x%pbAdedi==0){
		return true;
	}else{
		return false;
	}
}
