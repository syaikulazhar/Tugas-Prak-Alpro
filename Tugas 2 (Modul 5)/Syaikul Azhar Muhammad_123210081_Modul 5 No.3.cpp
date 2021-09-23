#include <iostream>
using namespace std;

int main () {
	string positif, mati, odp;
	
	//nama, kelas,NIM, dan judul
	cout << "Nama \t= Syaikul Azhar Muhammad" << endl;
	cout << "Kelas \t= IF-C" << endl;
	cout << "NIM \t= 123210081" << endl;
	cout << "----------------------------------" << endl;
	cout << "Mengklasifikasikan wilayah COVID-19" << endl;
	cout << "----------------------------------" << endl;
	
	cout << "jawab pertanyaan berikut untuk mengklasifikasikan wilayah anda dengan simbol : "<<endl;
	cout << " ya = y" <<endl;
	cout << " tidak = t" <<endl;
	cout << "\napakah ada ODP di wilayah anda? = ";
	cin >> odp;
	cout << "apakah ada kasus kematian akibat COVID-19 di wilayah anda? = ";
	cin >> mati;

	
	if (mati == "y"){
		if (odp == "y"){
			cout << "Kawasan anda masuk dalam zona hitam";
		} else if (odp == "t"){
			cout << "Mohon masukkan data yang benar";
		}
	} else if (mati == "t"){
		if (odp == "y"){
			cout << "apakah ada peningkatan kasus positif COVID-19 dari minggu pertama hingga minggu kedua? =";
			cin >> positif;
			if (positif == "y"){
				cout << "Kawasan anda masuk ke dalam zona merah";
			} else if (positif == "t"){
				cout << "Kawasan anda masuk ke dalam zona oranye";
			}
		} else if (odp == "t"){
			cout << "Kawasan anda masuk ke dalam zona hijau";
		}
	} else {
		cout << "Input tidak sesuai";
	}

}
