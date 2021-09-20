#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//tipe data
	
	
	//nama, kelas,NIM, dan judul
	cout << "Nama \t= Syaikul Azhar Muhammad" << endl;
	cout << "Kelas \t= IF-C" << endl;
	cout << "NIM \t= 123210081" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "Membuat Program Untuk Menghasilkan Output" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	
	//tipe data
	string Nama, NIM, Plug;
	int totalchar;
	
	//value Nama
	cout << "Masukkan :" << endl;
	cout << "Nama \t: ";
	getline (cin, Nama);
	
	//value NIM
	cout << "NIM \t: ";
	getline (cin, NIM);
	
	//value Plug
	cout << "Plug \t: ";
	getline (cin, Plug);
	cout << endl << endl;
	
	//penampilan hasil
	cout << "Inilah data anda :" << endl;
	cout << "Nama \t: " << Nama << endl;
	cout << "Nim \t: " << NIM << endl;
	cout << "Plug \t: " << Plug << endl;
	
	//dalam bentuk tabel
	cout << "\nDalam bentuk tabel"<<endl;
	cout << "===========================================================================================================\n";
	cout << "|              NIM              |                  Nama                  |              Plug              |\n";
	cout << "===========================================================================================================\n";
	cout << "|" << setw(19) << NIM << setw(13) << "|";
	cout << setw(31) << Nama << setw(10) << "|";
	cout << setw(17) << Plug << setw(16) << "|";
	
	return 0;
	
}

