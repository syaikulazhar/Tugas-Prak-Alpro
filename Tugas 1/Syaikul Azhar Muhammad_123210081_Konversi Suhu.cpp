#include <iostream>
using namespace std;

int main ()
{
	double c, f, k ,r;

	//nama, kelas, dan NIM
	cout << "Nama \t= Syaikul Azhar Muhammad" << endl;
	cout << "Kelas \t= IF-C" << endl;
	cout << "NIM \t= 123210081" << endl;
	
	//judul
	cout << "====================================================================" <<endl;
	cout << "Mengkonversi suhu dari celcius ke farenheit, kelvin, dan reamur" << endl;
	cout << "====================================================================" << endl;
	
	//masukkan nilai celcius
	cout << "\nMasukkan nilai suhu dalam celcius = ";
	cin >> c;
	
	//rumus perhitungan celcius ke farenheit
	f = (c * 9/5) + 32;
	
	//rumus perhitungan celcius ke kelvin
	k = 273 + c;
	
	//rumus perhitungan celcius ke reamur
	r = (c * 4 / 9) + 32;
	
	//penampilan hasil
	cout << "\nInilah hasir konversi anda :" << endl;
	cout << "Farenheit \t: " <<f<< endl;
	cout << "Kelvin \t\t: " <<k<< endl;
	cout << "Reamur \t\t: " <<r<< endl;
	
	return 0;
}
