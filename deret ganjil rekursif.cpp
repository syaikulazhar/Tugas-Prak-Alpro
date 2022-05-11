#include <iostream>
using namespace std;

int ganjil (int awal, int akhir) {
	if (awal > akhir) {
		return 0;
	} else {
		if (awal%2 == 0) {
			awal ++;
		}
	}
	cout << awal;
	if (awal < akhir) {
		cout << " + ";
	} else {
		cout << " = ";
	}
	return awal + ganjil(awal+2,akhir);
}

main () {
	int awl,akhr;
	cout << "Input bilangan awal  : ";
	cin >> awl;
	cout << "Input bilangan akhir : ";
	cin >> akhr;
	
	cout << "Deret ganjil : " << endl;
	cout << ganjil(awl,akhr);
}
